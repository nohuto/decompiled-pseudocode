/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0013770
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0005D50 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C000FBE0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        void *a1,
        void *a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        void **a8,
        void *a9)
{
  void **v13; // rbx
  int v14; // edi
  __int64 v15; // r8
  void *v16; // rbx
  __int128 *v17; // rcx
  __int128 *v18; // rcx
  CompositionObject *v19; // r14
  __int64 v20; // rax
  void *v22; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-98h]
  __int128 v25; // [rsp+70h] [rbp-88h]
  _DWORD v26[12]; // [rsp+80h] [rbp-78h] BYREF

  Object[1] = a1;
  Object[2] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v22 = 0LL;
  memset(v26, 0, 0x2DuLL);
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v16 = *v13;
  v22 = v16;
  v26[0] = a4;
  v17 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v17 = (__int128 *)MmUserProbeAddress;
  v24 = *v17;
  *(_OWORD *)&v26[1] = v24;
  v18 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v18 = (__int128 *)MmUserProbeAddress;
  v25 = *v18;
  *(_OWORD *)&v26[5] = v25;
  LOBYTE(v26[9]) = a7;
  *(_DWORD *)((char *)&v26[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v26[10] + 1) = (a3 >> 3) & 1;
  if ( (v26[0] & 9) != 9
    || (v26[0] & 2) != 0 && (v26[7] < v26[5] || v26[8] < v26[6])
    || v26[3] < v26[1]
    || v26[4] < v26[2]
    || *(_QWORD *)&v26[1]
    || (_WORD)a1 == (_WORD)a2 )
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    LOBYTE(v15) = 1;
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1LL,
            v15,
            (struct DirectComposition::ResourceObject **)Object);
    if ( v14 >= 0 )
    {
      v19 = (CompositionObject *)Object[0];
      if ( *((_DWORD *)Object[0] + 9) == 151 )
      {
        GreLockDwmState();
        v22 = 0LL;
        v14 = CompositionObject::OpenDwmHandle(v19, &v22);
        if ( v14 >= 0 )
        {
          v20 = UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt(v20, a1, a2, a3 & 1, (a3 >> 1) & 1, v26, v16, v22);
        }
        GreUnlockDwmState();
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v19);
    }
  }
  return (unsigned int)v14;
}
