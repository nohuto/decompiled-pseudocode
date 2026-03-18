/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C002CA20 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002CA60 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003F550 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C003FE60 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007CC40 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
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
  void *v15; // rbx
  __int128 *v16; // rcx
  __int128 *v17; // rcx
  CompositionObject *v18; // rsi
  __int64 v19; // rax
  void *v21; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[4]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+68h] [rbp-90h]
  __int128 v24; // [rsp+78h] [rbp-80h]
  _DWORD v25[12]; // [rsp+88h] [rbp-70h] BYREF

  Object[1] = a1;
  Object[2] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v21 = 0LL;
  memset(v25, 0, 0x2DuLL);
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v15 = *v13;
  Object[3] = v15;
  v21 = v15;
  v25[0] = a4;
  v16 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v23 = *v16;
  *(_OWORD *)&v25[1] = v23;
  v17 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v17 = (__int128 *)MmUserProbeAddress;
  v24 = *v17;
  *(_OWORD *)&v25[5] = v24;
  LOBYTE(v25[9]) = a7;
  *(_DWORD *)((char *)&v25[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v25[10] + 1) = (a3 >> 3) & 1;
  if ( (v25[0] & 9) != 9
    || (v25[0] & 2) != 0 && (v25[7] < v25[5] || v25[8] < v25[6])
    || v25[3] < v25[1]
    || v25[4] < v25[2]
    || *(_QWORD *)&v25[1]
    || (_WORD)a1 == (_WORD)a2 )
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)Object);
    if ( v14 >= 0 )
    {
      v18 = (CompositionObject *)Object[0];
      if ( *((_DWORD *)Object[0] + 9) == 189 )
      {
        GreLockDwmState();
        v21 = 0LL;
        v14 = CompositionObject::OpenDwmHandle(v18, &v21);
        if ( v14 >= 0 )
        {
          v19 = UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt(v19, a1, a2, a3 & 1, (a3 >> 1) & 1, v25, v15, v21);
        }
        GreUnlockDwmState();
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v18);
    }
  }
  return (unsigned int)v14;
}
