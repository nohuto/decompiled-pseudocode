/*
 * XREFs of MiLogSectionCreate @ 0x14088A810
 * Callers:
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402CF3BC (MiInitPerfMemoryFlags.c)
 */

_QWORD *__fastcall MiLogSectionCreate(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int inited; // eax
  _QWORD *result; // rax
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 *v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int64 *v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  v3 = a1 + 16;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = *(_DWORD *)(v2 + 48);
  do
  {
    v6 = v3[1];
    if ( v6 )
    {
      v7 = *((unsigned int *)v3 + 11);
      v10 = v3[1];
      v11 = v6 + 8 * v7;
      if ( a2 == 1 )
      {
        v15 = 0;
        LODWORD(v12) = v5;
        v13 = &v10;
        v14 = 24;
        EtwTraceKernelEvent((__int64)&v13, 1u, 0x20400001u, 0x249u, 0x401902u);
        if ( (*(_WORD *)(v2 + 12) & 0x1000) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
        {
          inited = MiInitPerfMemoryFlags(1, 2);
          MiLogPerfMemoryRangeEvent(v6, 0LL, inited, *((unsigned int *)v3 + 11));
        }
      }
      else
      {
        LODWORD(v12) = -1;
        v18 = 0;
        v16 = &v10;
        v17 = 24;
        EtwTraceKernelEvent((__int64)&v16, 1u, 0x20400001u, 0x24Fu, 0x1401902u);
      }
    }
    result = (_QWORD *)v3[2];
    v3 = result;
  }
  while ( result );
  return result;
}
