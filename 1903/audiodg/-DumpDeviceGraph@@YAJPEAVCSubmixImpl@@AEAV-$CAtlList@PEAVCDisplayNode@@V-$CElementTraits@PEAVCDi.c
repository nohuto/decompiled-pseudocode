/*
 * XREFs of ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003AB88
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003ADAC (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 */

__int64 __fastcall DumpDeviceGraph(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  __int64 result; // rax
  ATL::CAtlException *v14; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  ATL::CAtlException *v18; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+80h] [rbp+8h]

  v17 = -2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = a1[34];
  if ( v8 )
  {
    LODWORD(v9) = DumpDeviceGraph(v8, a2, a3, a4);
    if ( (int)v9 < 0 )
      goto LABEL_11;
  }
  v10 = a1[3];
  if ( v10 )
  {
    LODWORD(v9) = DumpDeviceGraph(v10, v6, v5, v4);
    if ( (int)v9 < 0 )
      goto LABEL_11;
  }
  v9 = 0LL;
  try
  {
    v15 = (_QWORD *)a1[9];
  }
  catch ( ATL::CAtlException *v18 )
  {
    v14 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v19 = *(_DWORD *)v14;
    v9 = (unsigned int)v19;
    if ( v19 >= 0 )
    {
      v4 = a4;
      v5 = a3;
      v6 = a2;
      goto LABEL_8;
    }
LABEL_11:
    result = (unsigned int)v9;
  }
  while ( 1 )
  {
LABEL_8:
    if ( !v15 )
      break;
    v16 = (_QWORD *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v9, &v15);
    v9 = 0LL;
    v11 = (_QWORD *)*v16;
    v16 = v11;
    if ( v11 )
    {
      v12 = DumpDeviceGraph(v11, v6, v5, v4);
      v9 = (unsigned int)v12;
      if ( v12 < 0 )
        break;
    }
  }
  goto LABEL_11;
}
