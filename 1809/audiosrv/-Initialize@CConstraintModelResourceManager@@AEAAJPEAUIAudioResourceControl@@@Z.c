/*
 * XREFs of ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x180059BA4
 * Callers:
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x180059B04 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CConstraintModel@@QEAA@XZ @ 0x180050928 (--0CConstraintModel@@QEAA@XZ.c)
 *     ?SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ @ 0x180059CE4 (-SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180059D9C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 */

__int64 __fastcall CConstraintModelResourceManager::Initialize(
        CConstraintModelResourceManager *this,
        struct IUnknown *a2)
{
  signed int v3; // ebx
  struct IUnknown **v4; // rcx
  char *EventW; // rax
  HANDLE v6; // rax
  CConstraintModel *v7; // rax
  int v8; // edx
  int v9; // r8d
  CConstraintModel *v10; // rcx
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  signed int v14; // eax

  v3 = 0;
  v4 = (struct IUnknown **)((char *)this + 208);
  if ( *v4 != a2 )
    ATL::AtlComPtrAssign(v4, a2);
  if ( ((*((_QWORD *)this + 13) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 13) = EventW;
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( ((*((_QWORD *)this + 28) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
LABEL_20:
    if ( v3 < 0 )
      return (unsigned int)v3;
    goto LABEL_7;
  }
  v6 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 28) = v6;
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v14 = GetLastError();
    v3 = v14;
    if ( v14 > 0 )
      v3 = (unsigned __int16)v14 | 0x80070000;
    goto LABEL_20;
  }
LABEL_7:
  v7 = (CConstraintModel *)operator new(0xF0uLL);
  if ( v7 )
    v10 = CConstraintModel::CConstraintModel(v7, v8, v9);
  else
    v10 = 0LL;
  *((_QWORD *)this + 2) = v10;
  v3 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
    v3 = CConstraintModel::Initialize(v10);
  if ( v3 >= 0 )
  {
    ThreadpoolWait = CreateThreadpoolWait(CConstraintModelResourceManager::s_WorkerThreadProc, this, 0LL);
    *((_QWORD *)this + 27) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)this + 28), 0LL);
      *((_QWORD *)this + 14) = CreateMutexW(0LL, 0, L"Global\\AudioResourceAcquisitionMutex");
      return (unsigned int)CConstraintModelResourceManager::SetupKeywordDetectorPriority(this);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v3;
}
