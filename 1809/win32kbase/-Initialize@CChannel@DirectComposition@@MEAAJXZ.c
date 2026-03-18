/*
 * XREFs of ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005C870
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BCE4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::Initialize(DirectComposition::CChannel *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  v4 = v3 == 0LL ? 0xC0000017 : 0;
  if ( !v3 )
  {
LABEL_8:
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_5;
  }
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    Win32FreePool((__int64)v3);
    goto LABEL_8;
  }
LABEL_5:
  *((_QWORD *)this + 4) = v3;
  return (unsigned int)v4;
}
