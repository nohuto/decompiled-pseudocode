/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x180089050
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800890F8 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r8
  CResource *v5; // rcx
  int v6; // eax
  int v7; // ebx

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 53);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 104) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 51);
      v5 = *(CResource **)(*((_QWORD *)this + 49) + 8LL * *(unsigned int *)(v4 + 24 * v3 + 20));
      if ( !v5 )
        goto LABEL_8;
      v5 = (CResource *)*((_QWORD *)v5 + 2);
      if ( !v5 )
        goto LABEL_8;
      v6 = CResource::AddSourceAnimation(v5, v1, *(_DWORD *)(v4 + 24 * v3));
      v7 = v6;
      if ( v6 >= 0 )
        break;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v6, 0x196u, 0LL);
LABEL_9:
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v7, 0x16Du, 0LL);
        return (unsigned int)v7;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 104) )
        return 0;
    }
    *((_BYTE *)this + 432) |= 2u;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  return 0;
}
