/*
 * XREFs of KseDriverLoadImage @ 0x14070D0B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x14015411C (KsepLogInfo.c)
 *     KsepLogError @ 0x140182C30 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x14070A848 (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14070D2FC (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x14088361C (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int v2; // eax
  int ShimsForDriver; // ebx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h]
  _QWORD v8[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0;
  v10 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  LOBYTE(v2) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( v2 == 1 )
    return 3221225659LL;
  if ( dword_140468424 == 2 && (KseEngine & 1) == 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(&v6, a1 + 88);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepStringDuplicateUnicode(v8, a1 + 72);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepGetShimsForDriver(
                           (__int64)&v6,
                           (int)v8,
                           *(_QWORD *)(a1 + 48),
                           *(_DWORD *)(a1 + 64),
                           &v10,
                           &v9);
        if ( ShimsForDriver >= 0 )
        {
          ShimsForDriver = KsepApplyShimsToDriver(a1, &v6, v10, v9);
          if ( ShimsForDriver >= 0 )
            KsepEvntLogShimsApplied((unsigned __int16 *)&v6, v10, v9);
        }
      }
    }
    if ( !ShimsForDriver )
    {
      dword_140468428 |= 0x800u;
      qword_140468478 = *(_QWORD *)(a1 + 48);
    }
    if ( (int)(ShimsForDriver + 0x80000000) < 0 || ShimsForDriver == -1073741275 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458946LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v9, v7);
      KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v9, v7);
    }
    else if ( v7 )
    {
      v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140446844[2 * v5] = ShimsForDriver;
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
  KsepStringFree(&v6);
  KsepStringFree(v8);
  return 0LL;
}
