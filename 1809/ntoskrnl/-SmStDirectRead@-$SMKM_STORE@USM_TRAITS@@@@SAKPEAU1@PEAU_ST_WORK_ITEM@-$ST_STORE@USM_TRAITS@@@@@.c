/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14014F8C8
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D924 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DE40 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  PSLIST_ENTRY Context; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // [rsp+30h] [rbp-98h]
  __int128 v12; // [rsp+30h] [rbp-98h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-88h] BYREF
  int v14; // [rsp+58h] [rbp-70h]
  __int128 v15; // [rsp+60h] [rbp-68h]
  _BYTE v16[48]; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6568) )
  {
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0LL, (__int64)v16);
    v2 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v6 = (__int64)Context;
    if ( Context )
    {
      v7 = *a2;
      BugCheckParameter3[0] = a1;
      v12 = v7;
      v8 = a2[1];
      v2 = 3;
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      BugCheckParameter3[2] = (ULONG_PTR)Context;
      v15 = v8;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (ULONG_PTR)BugCheckParameter3,
                  0x2000,
                  0,
                  0LL) >= 0 )
      {
        v2 = 2;
        if ( v14 )
        {
          v2 = 6;
        }
        else
        {
          v10 = v15;
          *a2 = v12;
          a2[1] = v10;
        }
      }
    }
  }
  else
  {
    v6 = v11;
  }
  if ( (v2 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext((_SLIST_HEADER *)a1, v6);
  if ( (v2 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v2 >> 2;
}
