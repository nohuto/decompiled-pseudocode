/*
 * XREFs of HUBDTX_LogBillboardEvent @ 0x1C0026DA4
 * Callers:
 *     HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C001D010 (HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001D810 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0puuhz @ 0x1C00238D4 (McTemplateK0puuhz.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

ULONG __fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  ULONG result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-148h]
  int v9; // [rsp+28h] [rbp-140h]
  __int64 v10; // [rsp+28h] [rbp-140h]
  int v11; // [rsp+30h] [rbp-138h]
  __int64 v12; // [rsp+30h] [rbp-138h]
  _BYTE v13[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2640);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v13, 0, v5 + 2);
    memmove(v13, a2 + 2, (unsigned int)v5);
  }
  v11 = *(unsigned __int8 *)(v4 + 5);
  v9 = *(unsigned __int8 *)(v4 + 4);
  result = WPP_RECORDER_SF_dD(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             4u,
             5u,
             0x56u,
             (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
             v9,
             v11);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
  {
    LOWORD(v12) = *(_WORD *)(v4 + 6);
    LOBYTE(v10) = *(_BYTE *)(v4 + 5);
    LOBYTE(v8) = *(_BYTE *)(v4 + 4);
    return McTemplateK0puuhz(
             (__int64)v13,
             v7,
             (const GUID *)(a1 + 1516),
             *(_QWORD *)(a1 + 24),
             v8,
             v10,
             v12,
             (unsigned __int64)v13 & -(__int64)(a2 != 0LL));
  }
  return result;
}
