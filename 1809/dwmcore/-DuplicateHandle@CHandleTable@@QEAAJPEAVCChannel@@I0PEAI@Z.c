/*
 * XREFs of ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x180099FC4
 * Callers:
 *     ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x180099780 (-DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A330 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CHandleTable::DuplicateHandle(
        CHandleTable *this,
        struct CChannel *a2,
        unsigned int a3,
        struct CChannel *a4,
        unsigned int *a5)
{
  unsigned int *Entry; // rax
  unsigned int v10; // ecx
  int NewEntry; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  struct CHandleTable::HANDLE_ENTRY *v16; // rbp
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v20; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v22[4]; // [rsp+40h] [rbp-28h] BYREF

  v21 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v20 = 0;
  Entry = (unsigned int *)CHandleTable::GetEntry(this, a3);
  if ( Entry )
  {
    NewEntry = HANDLE_TABLE::GetNewEntry((struct CChannel *)((char *)a4 + 16), *Entry, &v20);
    v13 = NewEntry;
    if ( NewEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, NewEntry, 0xC1u);
    }
    else
    {
      v14 = v20;
      v16 = CHandleTable::GetEntry((struct CChannel *)((char *)a4 + 16), v20);
      if ( v16 )
      {
        v22[2] = *((_DWORD *)a4 + 14);
        v22[0] = 51;
        v22[1] = a3;
        v22[3] = v14;
        v17 = CChannel::SendCommand(a2, v22, 0x10u);
        v13 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xDFu);
          memset_0((void *)(*((_QWORD *)a4 + 5) + v14 * *((_DWORD *)a4 + 6)), 0, *((unsigned int *)a4 + 6));
        }
        else
        {
          *((_DWORD *)v16 + 1) = 1;
          *a5 = v14;
        }
      }
      else
      {
        v13 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024890, 0xCAu);
      }
    }
  }
  else
  {
    v13 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024890, 0xB8u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v13;
}
