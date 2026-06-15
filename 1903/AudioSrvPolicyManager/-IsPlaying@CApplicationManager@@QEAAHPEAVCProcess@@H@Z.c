/*
 * XREFs of ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001C734
 * Callers:
 *     PbmIsPlaying @ 0x180020A90 (PbmIsPlaying.c)
 * Callees:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x18000E388 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsPlaying(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rbp
  unsigned int IsPlaying; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  CApplication *v6; // rcx
  CApplication *v8; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+78h] [rbp+10h]

  v8 = this;
  v3 = g_ApplicationManager;
  IsPlaying = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v5;
  v6 = (CApplication *)*((_QWORD *)a2 + 32);
  v8 = v6;
  if ( !v6 )
  {
    if ( (int)CApplicationManager::GetApplication(
                v3,
                *((const unsigned __int16 **)a2 + 26),
                *((_QWORD *)a2 + 30),
                *((_DWORD *)a2 + 49),
                &v8,
                0,
                0LL) < 0 )
      goto LABEL_5;
    v6 = v8;
  }
  IsPlaying = CApplication::IsPlaying(v6);
LABEL_5:
  if ( v5 )
    LeaveCriticalSection(v5);
  return IsPlaying;
}
