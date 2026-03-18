/*
 * XREFs of KseDriverLoadImage @ 0x14067DF60
 * Callers:
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x1400F4D18 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14029FB44 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     KsepLogError @ 0x14029FDE4 (KsepLogError.c)
 *     KsepGetShimsForDriver @ 0x14067DBCC (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x14067E16C (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14067E1A4 (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x14084817C (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int v2; // eax
  int ShimsForDriver; // ebx
  __int64 v5; // rax
  unsigned __int16 v6[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp-8h]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0;
  v11 = 0LL;
  *(_DWORD *)v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  LOBYTE(v2) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( v2 == 1 )
    return 3221225659LL;
  if ( dword_14043C8B4 == 2 && (KseEngine & 1) == 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v6, a1 + 88);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepStringDuplicateUnicode(&v8, a1 + 72);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepGetShimsForDriver(
                           (__int64)v6,
                           (__int64)&v8,
                           *(_QWORD *)(a1 + 48),
                           *(_DWORD *)(a1 + 64),
                           &v11,
                           &v10);
        if ( ShimsForDriver >= 0 )
        {
          ShimsForDriver = KsepApplyShimsToDriver(a1, v6, v11, v10);
          if ( ShimsForDriver >= 0 )
            KsepEvntLogShimsApplied(v6, v11, v10);
        }
      }
    }
    if ( !ShimsForDriver )
    {
      dword_14043C8B8 |= 0x800u;
      qword_14043C908 = *(_QWORD *)(a1 + 48);
    }
    if ( (int)(ShimsForDriver + 0x80000000) < 0 || ShimsForDriver == -1073741275 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458946LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v10, v7);
      KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v10, v7);
    }
    else if ( v7 )
    {
      v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_14041ABE4[2 * v5] = ShimsForDriver;
      KsepHistoryErrors[2 * v5] = 458941;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          4LL,
          "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
          v7,
          (unsigned int)ShimsForDriver);
      KsepLogError(
        4,
        "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
        v7,
        (unsigned int)ShimsForDriver);
    }
  }
  KsepStringFree(v6);
  KsepStringFree(&v8);
  return 0LL;
}
