/*
 * XREFs of NtFlipObjectAddContent @ 0x1C005EB70
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C005DE6C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C005E4BC (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E9D8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00606AC (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectAddContent(void *a1, struct FlipManagerObject **a2, unsigned int a3, char *a4)
{
  struct FlipManagerObject *v7; // rsi
  struct FlipManagerObject *v8; // r14
  __int64 v9; // r8
  int v10; // ebx
  char v11; // r8
  struct CFlipPropertySet *v12; // rdi
  struct CFlipPropertySet *v14; // [rsp+20h] [rbp-58h] BYREF
  struct FlipManagerObject *v15[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( a1 && a2 )
  {
    v14 = 0LL;
    v7 = 0LL;
    v15[0] = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (struct FlipManagerObject **)MmUserProbeAddress;
    v8 = *a2;
    v15[1] = *a2;
    KeEnterCriticalRegion();
    v10 = CreateFlipPropertySetWorker<CFlipPropertySet>(a3, a4, v9, &v14);
    v12 = v14;
    if ( v10 >= 0 )
    {
      v10 = FlipManagerObject::ResolveHandle(a1, 2u, v11, v15);
      v7 = v15[0];
      if ( v10 >= 0 )
        v10 = FlipManagerObject::AddContent(v15[0], (unsigned __int64)v8, v12);
    }
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( v12 )
      CFlipPropertySetBase::Release(v12);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
