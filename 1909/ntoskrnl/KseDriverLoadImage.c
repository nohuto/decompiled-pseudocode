/*
 * XREFs of KseDriverLoadImage @ 0x14070EE94
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x1401547BC (KsepLogInfo.c)
 *     KsepLogError @ 0x1401831E0 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1402B6DB4 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x14070C628 (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x14070F0A4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14070F0DC (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x140882D1C (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int ShimsForDriver; // ebx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h]
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v8 = 0;
  v9 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7[0] = 0LL;
  v7[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return 3221225659LL;
  if ( dword_140468164 == 2 && (KseEngine & 1) == 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(&v5, a1 + 88);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepStringDuplicateUnicode(v7, a1 + 72);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepGetShimsForDriver(
                           (__int64)&v5,
                           (int)v7,
                           *(_QWORD *)(a1 + 48),
                           *(_DWORD *)(a1 + 64),
                           &v9,
                           &v8);
        if ( ShimsForDriver >= 0 )
        {
          ShimsForDriver = KsepApplyShimsToDriver(a1, &v5, v9, v8);
          if ( ShimsForDriver >= 0 )
            KsepEvntLogShimsApplied((unsigned __int16 *)&v5, v9, v8);
        }
      }
    }
    if ( !ShimsForDriver )
    {
      dword_140468168 |= 0x800u;
      qword_1404681B8 = *(_QWORD *)(a1 + 48);
    }
    if ( (int)(ShimsForDriver + 0x80000000) < 0 || ShimsForDriver == -1073741275 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458946LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v8, v6);
      KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v8, v6);
    }
    else if ( v6 )
    {
      v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140446564[2 * v4] = ShimsForDriver;
      KsepHistoryErrors[2 * v4] = 458941;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          4LL,
          "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
          v6,
          (unsigned int)ShimsForDriver);
      KsepLogError(
        4,
        "KSE: shimming failed for driver [%ws] - [0x%x] but we let the load succeed ...\n",
        v6,
        (unsigned int)ShimsForDriver);
    }
  }
  KsepStringFree(&v5);
  KsepStringFree(v7);
  return 0LL;
}
