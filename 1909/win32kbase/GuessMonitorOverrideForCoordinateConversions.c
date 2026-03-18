/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x1C0080770
 * Callers:
 *     NtUserLockCursor @ 0x1C0093B90 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00AFD10 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C0115430 (NtUserGetClipCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // edx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v3 = 0LL;
  v6 = 1;
  if ( **(_DWORD **)gpDispInfo > 1u )
  {
    if ( (int)IsDCELogicalSpeedTopLevelHitTestSupported() < 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v8 = 18LL;
      if ( !a3 )
        v8 = a2;
      v9 = DCELogicalSpeedTopLevelHitTest(&v13, v8);
    }
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = *(_DWORD *)(v10 + 288);
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
      {
        if ( (a2 & 0xF) != 2 || (v12 = 1, (a2 & 0x20000000) == 0) )
          v12 = 0;
        if ( (v11 & 0xF) != 2 || (v11 & 0x20000000) == 0 )
          v6 = 0;
        if ( v12 == v6 )
          return HMValidateSharedHandleNoRip(*(_QWORD *)(v10 + 256));
      }
    }
  }
  return v3;
}
