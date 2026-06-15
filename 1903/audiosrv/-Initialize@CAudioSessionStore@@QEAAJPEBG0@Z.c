/*
 * XREFs of ?Initialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x180039B34
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x180039764 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039F30 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Initialize(
        CAudioSessionStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rax
  signed int PropertyStore; // ebx
  signed int LastError; // eax

  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = v6 + 1;
  v8 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
    v8 = -1LL;
  v9 = (unsigned __int16 *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 2) = v9;
  if ( v9 )
    PropertyStore = StringCchCopyW(v9, v7, a2);
  else
    PropertyStore = -2147024882;
  if ( PropertyStore < 0 )
    goto LABEL_11;
  if ( !InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((char *)this + 48), 0xFA0u) )
  {
    LastError = GetLastError();
    PropertyStore = LastError;
    if ( LastError > 0 )
      PropertyStore = (unsigned __int16)LastError | 0x80070000;
  }
  if ( PropertyStore < 0 || (PropertyStore = CAudioSessionStore::LoadPropertyStore(this, a3), PropertyStore < 0) )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::Initialize", 3229, PropertyStore);
  return (unsigned int)PropertyStore;
}
