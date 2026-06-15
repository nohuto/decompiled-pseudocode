/*
 * XREFs of ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x180061448
 * Callers:
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x180063F6C (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x1800578F4 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x1800614D4 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::Create(
        struct IAudioResourceControl *a1,
        struct CConstraintModelResourceManager **a2)
{
  CConstraintModelResourceManager *v4; // rax
  CConstraintModelResourceManager *v5; // rbx
  int v6; // edi

  if ( a2 )
  {
    v4 = (CConstraintModelResourceManager *)operator new(0x148uLL);
    if ( v4 )
      v5 = CConstraintModelResourceManager::CConstraintModelResourceManager(v4);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = CConstraintModelResourceManager::Initialize(v5, a1);
      if ( v6 < 0 )
        (*(void (__fastcall **)(CConstraintModelResourceManager *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v6;
}
