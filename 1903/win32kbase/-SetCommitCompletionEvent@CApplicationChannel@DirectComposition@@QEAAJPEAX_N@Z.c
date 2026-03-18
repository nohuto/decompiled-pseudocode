/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0054CC8
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0054C50 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C0055D34 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v6; // rax
  unsigned int v7; // edx
  NTSTATUS v8; // edi
  DirectComposition::CEvent *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
    return (unsigned int)-1073741790;
  v6 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
  v3 = v6;
  if ( v6 )
    memset(v6, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741801;
LABEL_7:
  v8 = DirectComposition::CEvent::Create(a2, (int)a2, &v10);
  if ( v8 < 0 )
    goto LABEL_15;
  if ( v3 )
    v8 = ExInitializeResourceLite(v3);
  if ( v8 < 0 )
  {
LABEL_15:
    if ( v3 )
      Win32FreePool((__int64)v3);
    if ( v10 )
      DirectComposition::CEvent::`scalar deleting destructor'(v10, v7);
  }
  else
  {
    *((_QWORD *)this + 45) = v10;
    *((_QWORD *)this + 46) = v3;
  }
  return (unsigned int)v8;
}
