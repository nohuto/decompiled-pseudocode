/*
 * XREFs of ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18003DD5C
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003DC00 (-Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180088088 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::CLivePreviewTimeline(CLivePreviewTimeline *this)
{
  CLivePreviewTimeline *v1; // r8
  CLivePreviewTimeline *result; // rax

  CTimelineBase::CTimelineBase((__int64)this, -1.0, 0.0, 1.0, 0);
  result = v1;
  *(_QWORD *)v1 = &CLivePreviewTimeline::`vftable';
  return result;
}
