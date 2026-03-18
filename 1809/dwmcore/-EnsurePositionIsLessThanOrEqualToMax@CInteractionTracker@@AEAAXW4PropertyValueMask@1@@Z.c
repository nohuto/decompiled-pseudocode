/*
 * XREFs of ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18019F608
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18019EEBC (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A1FD0 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A23F8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 168) && (*(_BYTE *)(a1 + 532) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 80);
    v3 = *(_QWORD *)(a1 + 72);
    v4 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v3) = fminf(*(float *)(a1 + 72), *(float *)(a1 + 96));
    if ( (a2 & 2) != 0 )
      HIDWORD(v3) = fminf(*(float *)(a1 + 76), *(float *)(a1 + 100));
    v4 = 0;
    CInteractionTracker::SetPosition((CInteractionTracker *)a1, (const struct D2DVector3 *)&v3);
  }
}
