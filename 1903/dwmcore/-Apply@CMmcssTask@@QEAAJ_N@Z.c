/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D0CD8
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180098680 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0964 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800D0AAC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_ @ 0x1800D9310 (_lambda_21d74d5478775f948634749288fbae48_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  int v2; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  __int64 v7; // rax
  signed int v8; // eax
  signed int LastError; // eax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v2 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
    {
      DebugInfo[2].EntryCount = 0;
      DebugInfo = this[1].DebugInfo;
    }
    if ( DebugInfo->Type && !*(_QWORD *)&DebugInfo[2].Flags )
    {
      SetLastError(0);
      v7 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
             this[1].DebugInfo,
             &this[1].DebugInfo[2].EntryCount);
      *(_QWORD *)&this[1].DebugInfo[2].Flags = v7;
      if ( v7 )
      {
        SetLastError(0);
        if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[1].SpinCount)(
               *(_QWORD *)&this[1].DebugInfo[2].Flags,
               this[1].DebugInfo[2].ContentionCount) )
        {
          goto LABEL_2;
        }
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        v11 = 269;
      }
      else
      {
        v8 = GetLastError();
        v2 = v8;
        if ( v8 > 0 )
          v2 = (unsigned __int16)v8 | 0x80070000;
        v11 = 265;
      }
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v2, v11, 0LL);
    }
  }
LABEL_2:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return (unsigned int)v2;
}
