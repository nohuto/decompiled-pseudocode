/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18018A724
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  char *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // esi
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax

  v5 = (char *)this + 152;
  v6 = *((_DWORD *)this + 44);
  v7 = a5 >> 4;
  v8 = v6 + v7;
  v9 = v6 + (unsigned int)v7 < v6 ? 0x80070216 : 0;
  if ( v6 + (unsigned int)v7 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)this + 43) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 16, v7, a4);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)v5 + 16LL * v6), a4, 16 * v7);
    *((_DWORD *)v5 + 6) = v8;
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1F3u);
  return (unsigned int)v9;
}
