/*
 * XREFs of RtlpHpAllocVA @ 0x14002236C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140021C20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x140110034 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x140136818 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x140159BB4 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpEnvAllocVA @ 0x140022550 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14010F1B8 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpAllocVA(void **a1, size_t *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v8; // r11d
  size_t v9; // r8
  size_t v10; // r8
  unsigned int v11; // r9d
  __int64 result; // rax
  char *HeapManager; // rax
  __int64 v14; // r10
  size_t v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // [rsp+50h] [rbp-19h]
  _DWORD v19[3]; // [rsp+60h] [rbp-9h] BYREF
  int v20; // [rsp+6Ch] [rbp+3h]
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int128 v22; // [rsp+80h] [rbp+17h] BYREF

  *(_QWORD *)&v22 = 0x100000001000LL;
  *((_QWORD *)&v22 + 1) = 0x4000000000200000LL;
  v8 = a4 & 0xFEFFFFFF;
  v18 = *a6;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v22 = *a6;
    HeapManager = (char *)RtlpHpEnvGetHeapManager(&v22);
    v20 = 0;
    if ( BYTE3(v18) )
      v19[0] = BYTE3(v18) - 1;
    else
      v19[0] = -1;
    v19[1] = BYTE1(v18);
    v19[2] = BYTE2(v18);
    if ( (v18 & 8) != 0 )
      v20 = 1;
    v15 = *a2;
    v21 = *((_QWORD *)&v18 + 1);
    *(_QWORD *)&v22 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = RtlpHpVaMgrCtxAlloc(HeapManager + 88, &v22, v14, v19);
    if ( !v16 )
      return 3221225626LL;
    *a2 = v22;
    *a1 = (void *)v16;
    return 0LL;
  }
  v9 = *a2;
  if ( (a4 & 0x2000) != 0 )
  {
    v17 = *((unsigned int *)&v22 + BYTE1(v18));
    v10 = v17 - (((_DWORD)v17 + (_DWORD)v9 - 1) & (unsigned int)(v17 - 1)) + v9 - 1;
  }
  else
  {
    v10 = v9 - ((v9 - 1) & 0xFFF) + 4095;
  }
  *(_QWORD *)&v22 = v10;
  if ( (a4 & 0x1000) != 0 && BYTE1(v18) >= 2u )
  {
    *a2 = v10;
    if ( (a4 & 0x40000000) != 0 )
      memset(*a1, 0, v10);
    return 0LL;
  }
  v11 = a4 & 0xFEFBFFFF | 0x40000;
  if ( (((unsigned __int8)v18 >> 3) & ((v8 & 0x2000) != 0)) == 0 )
    v11 = v8;
  result = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&v22, 0, v11, a5, ((unsigned __int8)v18 >> 1) & 3, BYTE1(v18));
  if ( (int)result >= 0 )
  {
    *a2 = v22;
    return 0LL;
  }
  return result;
}
