/*
 * XREFs of ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800E1894
 * Callers:
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x1800E1408 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E17B0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     <none>
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 17) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return this;
}
