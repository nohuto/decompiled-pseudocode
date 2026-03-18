/*
 * XREFs of ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01A69CC
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C01A3E94 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C01A3F5C (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C01A4030 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C01A4104 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01B00C0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B01F0 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rax
  void *v8; // rsi

  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 2);
  if ( v4 != v5 )
  {
LABEL_8:
    *(_QWORD *)(*(_QWORD *)this + 8 * v4) = a2;
    LOBYTE(v7) = 1;
    ++*((_QWORD *)this + 1);
    return (char)v7;
  }
  v6 = 4LL;
  if ( v5 )
    v6 = 2 * v5;
  v7 = (void *)Win32AllocPoolWithQuota(8 * v6, 0);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)this )
    {
      memmove(v7, *(const void **)this, 8LL * *((_QWORD *)this + 1));
      Win32FreePool(*(_QWORD *)this);
    }
    v4 = *((_QWORD *)this + 1);
    *(_QWORD *)this = v8;
    *((_QWORD *)this + 2) = v6;
    goto LABEL_8;
  }
  return (char)v7;
}
