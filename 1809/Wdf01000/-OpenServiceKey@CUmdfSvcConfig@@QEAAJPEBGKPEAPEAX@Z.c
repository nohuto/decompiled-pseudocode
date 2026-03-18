/*
 * XREFs of ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x1C0090DE0
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z @ 0x1C0090D4C (-OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z.c)
 */

__int64 __fastcall CUmdfSvcConfig::OpenServiceKey(
        CUmdfSvcConfig *this,
        const wchar_t *ServiceName,
        unsigned int RegKeyHandle,
        void **a4)
{
  const wchar_t *v7; // rax
  __int64 v8; // r10
  NTSTATUS appended; // ebx
  __int16 v10; // r8
  __int16 v11; // r8
  unsigned __int16 v12; // si
  const wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rdi
  unsigned int v15; // r9d
  _UNICODE_STRING regPath; // [rsp+30h] [rbp-38h] BYREF
  void *hServiceKey; // [rsp+78h] [rbp+10h] BYREF

  hServiceKey = 0LL;
  *a4 = 0LL;
  if ( ServiceName )
  {
    v7 = ServiceName;
    v8 = 60LL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v8;
    }
    while ( v8 );
    appended = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
      v10 = 60 - v8;
    else
      v10 = 0;
  }
  else
  {
    v10 = (__int16)hServiceKey;
    appended = -1073741811;
  }
  if ( appended >= 0 )
  {
    v11 = 2 * (v10 + 78);
    v12 = (unsigned __int16)v11 < 0x9Cu ? -1 : v11;
    appended = (unsigned __int16)v11 < 0x9Cu ? 0xC0000095 : 0;
    if ( (unsigned __int16)v11 >= 0x9Cu )
    {
      PoolWithTag = (const wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * v12, 0x43534D55u);
      v14 = (wchar_t *)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        RtlInitUnicodeString(&regPath, PoolWithTag);
        regPath.MaximumLength = v12;
        appended = RtlAppendUnicodeToString(
                     &regPath,
                     L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WUDF\\Services\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&regPath, ServiceName);
          if ( appended >= 0 )
          {
            appended = CUmdfSvcConfig::OpenKeyHelper(this, 0LL, &regPath, v15, this->m_AutoClose, &hServiceKey);
            if ( appended >= 0 )
              *a4 = hServiceKey;
          }
        }
        ExFreePoolWithTag(v14, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)appended;
}
