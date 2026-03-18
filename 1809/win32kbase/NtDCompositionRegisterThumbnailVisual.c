/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0002E10
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C002A9E0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00486E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00488E0 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C006E8E0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
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
  _OWORD *v16; // rcx
  _OWORD *v17; // rcx
  CompositionObject *v18; // rsi
  __int64 v19; // rax
  void *v21; // [rsp+40h] [rbp-98h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v23[12]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = a1;
  Object[2] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v21 = 0LL;
  memset(v23, 0, 0x2DuLL);
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v15 = *v13;
  v21 = v15;
  v23[0] = a4;
  v16 = (_OWORD *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v23[1] = *v16;
  v17 = (_OWORD *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v23[5] = *v17;
  LOBYTE(v23[9]) = a7;
  *(_DWORD *)((char *)&v23[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v23[10] + 1) = (a3 >> 3) & 1;
  if ( (v23[0] & 9) != 9
    || (v23[0] & 2) != 0 && (v23[7] < v23[5] || v23[8] < v23[6])
    || v23[3] < v23[1]
    || v23[4] < v23[2]
    || *(_QWORD *)&v23[1]
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
      if ( *((_DWORD *)Object[0] + 9) == 157 )
      {
        GreLockDwmState();
        v21 = 0LL;
        v14 = CompositionObject::OpenDwmHandle(v18, &v21);
        if ( v14 >= 0 )
        {
          v19 = UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt(v19, a1, a2, a3 & 1, (a3 >> 1) & 1, v23, v15, v21);
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
