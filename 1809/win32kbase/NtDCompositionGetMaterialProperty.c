/*
 * XREFs of NtDCompositionGetMaterialProperty @ 0x1C0167010
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C007A3A0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     FindMaterialProperty @ 0x1C008B6F4 (FindMaterialProperty.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C00E002C (UserGetDesktopIdForCurrentThread.c)
 */

__int64 __fastcall NtDCompositionGetMaterialProperty(__int64 a1, _QWORD *a2)
{
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 DesktopIdForCurrentThread; // rax
  int MaterialProperty; // ebx
  void *v10; // r8
  CompositionObject *v11; // rcx
  void *v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  DesktopIdForCurrentThread = UserGetDesktopIdForCurrentThread(v6, v5, v7);
  MaterialProperty = FindMaterialProperty(DesktopIdForCurrentThread, a1, &v14);
  if ( MaterialProperty >= 0 && !*(_QWORD *)(v14 + 16) )
    MaterialProperty = -1073741275;
  v10 = 0LL;
  v13 = 0LL;
  if ( MaterialProperty >= 0 )
  {
    v11 = *(CompositionObject **)(v14 + 16);
    if ( v11 )
    {
      MaterialProperty = CompositionObject::CreateHandle(v11, 1u, 0, 0, &v13);
      v10 = v13;
      if ( MaterialProperty >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = v13;
        v10 = 0LL;
        v13 = 0LL;
      }
    }
    else
    {
      MaterialProperty = -1073741790;
    }
  }
  if ( v10 )
    ObCloseHandle(v10, 0);
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)MaterialProperty;
}
