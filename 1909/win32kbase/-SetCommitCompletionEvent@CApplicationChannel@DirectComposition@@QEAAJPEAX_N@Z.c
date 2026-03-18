/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C006FF08
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C006FE90 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C006F7C0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C007003C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v6; // rax
  NTSTATUS v7; // edi
  DirectComposition::CEvent *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
    return (unsigned int)-1073741790;
  v6 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v6;
  if ( v6 )
    memset(v6, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741801;
LABEL_7:
  v7 = DirectComposition::CEvent::Create(a2, (int)a2, &v9);
  if ( v7 < 0 )
    goto LABEL_15;
  if ( v3 )
    v7 = ExInitializeResourceLite(v3);
  if ( v7 < 0 )
  {
LABEL_15:
    if ( v3 )
      Win32FreePool((__int64)v3);
    if ( v9 )
      DirectComposition::CEvent::`scalar deleting destructor'(v9);
  }
  else
  {
    *((_QWORD *)this + 45) = v9;
    *((_QWORD *)this + 46) = v3;
  }
  return (unsigned int)v7;
}
