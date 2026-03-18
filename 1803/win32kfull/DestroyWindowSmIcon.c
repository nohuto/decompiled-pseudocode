/*
 * XREFs of DestroyWindowSmIcon @ 0x1C006AE84
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01F9FB0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  struct tagCURSOR *v7; // rbx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v4 )
    return 0LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoRip(v4, a2, a3);
  v7 = (struct tagCURSOR *)v6;
  if ( !v6 || (*(_DWORD *)(v6 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0LL, a1, 1824LL, 1LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  DestroyCursor(v7, 0);
  return 1LL;
}
