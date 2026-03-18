/*
 * XREFs of DestroyWindowSmIcon @ 0x1C001D2E8
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0222680 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  struct tagCURSOR *v6; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(a2) = 3;
  v5 = HMValidateHandleNoRip(v3, a2);
  v6 = (struct tagCURSOR *)v5;
  if ( !v5 || (*(_DWORD *)(v5 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  _DestroyCursor(v6, 0);
  return 1LL;
}
