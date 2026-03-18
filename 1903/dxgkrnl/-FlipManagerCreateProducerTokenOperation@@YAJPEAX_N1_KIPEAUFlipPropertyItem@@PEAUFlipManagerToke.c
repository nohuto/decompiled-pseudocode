/*
 * XREFs of ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00602E4
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0059680 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C005DE2C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E998 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0060050 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C0060490 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006066C (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall FlipManagerCreateProducerTokenOperation(
        void *a1,
        bool a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        struct FlipManagerTokenInitInfo *a7)
{
  PVOID v7; // rbx
  bool v11; // bp
  int v12; // eax
  char v13; // r8
  struct CFlipPropertySet *v14; // r14
  int IsDwmBound; // edi
  int v16; // eax
  struct CFlipPresentUpdate *v17; // rbp
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CFlipPropertySetBase *v20; // [rsp+38h] [rbp-30h] BYREF
  struct CFlipPresentUpdate *v21; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v11 = a3;
  Object = 0LL;
  v12 = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, (char *)a6, a3, &v20);
  v14 = v20;
  IsDwmBound = v12;
  if ( v12 >= 0 )
  {
    v16 = FlipManagerObject::ResolveHandle(a1, 2u, v13, (struct FlipManagerObject **)&Object);
    v7 = Object;
    IsDwmBound = v16;
    if ( v16 >= 0 )
    {
      IsDwmBound = FlipManagerObject::CreatePresentUpdateForProducer(
                     (FlipManagerObject *)Object,
                     a2,
                     v11,
                     a4,
                     v14,
                     &v21);
      if ( IsDwmBound >= 0 )
      {
        v17 = v21;
        *((_QWORD *)a7 + 3) = *((_QWORD *)v21 + 8);
        IsDwmBound = ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0);
        if ( IsDwmBound >= 0 )
        {
          IsDwmBound = FlipManagerObject::IsDwmBound((FlipManagerObject *)v7, (bool *)a7 + 16);
          if ( IsDwmBound >= 0 )
          {
            *((_QWORD *)a7 + 1) = v7;
            *((_QWORD *)a7 + 4) = a4;
            *(_QWORD *)a7 = v17;
            *((_QWORD *)v17 + 1) = v7;
            v7 = 0LL;
          }
        }
      }
    }
  }
  if ( v14 )
    CFlipPropertySetBase::Release(v14);
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)IsDwmBound;
}
