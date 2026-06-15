/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140035B20
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140007E40 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14000B744 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000C080 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x140035A20 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  wil::details::ReportFailure_HrMsg();
}
