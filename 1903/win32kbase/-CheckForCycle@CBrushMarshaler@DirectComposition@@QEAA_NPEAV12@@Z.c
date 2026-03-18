/*
 * XREFs of ?CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z @ 0x1C0080C10
 * Callers:
 *     ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00807E0 (-SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00808D0 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0080B30 (-SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CBrushMarshaler::CheckForCycle(
        DirectComposition::CBrushMarshaler *this,
        struct DirectComposition::CBrushMarshaler *a2)
{
  unsigned int *v4; // rbx
  char v5; // di
  unsigned int **v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  *((_QWORD *)a2 + 5) = 0LL;
  v4 = (unsigned int *)a2;
  *((_DWORD *)a2 + 12) = 0;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v4 == (unsigned int *)this )
        v5 = 1;
      if ( v5
        || !(*(unsigned __int8 (__fastcall **)(unsigned int *, _QWORD, __int64 *))(*(_QWORD *)v4 + 248LL))(
              v4,
              v4[12],
              &v8) )
      {
        break;
      }
      ++v4[12];
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 40) )
        {
          v5 = 1;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v4;
          *(_DWORD *)(v8 + 48) = 0;
          v4 = (unsigned int *)v8;
        }
      }
    }
    v4[12] = 0;
    v6 = (unsigned int **)(v4 + 10);
    if ( v4 == (unsigned int *)a2 )
      break;
    v4 = *v6;
    *v6 = 0LL;
  }
  *v6 = 0LL;
  return v5;
}
