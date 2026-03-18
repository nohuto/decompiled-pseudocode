/*
 * XREFs of ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x1800CE714
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800CE5D0 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ @ 0x180256FB0 (-EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::MapSection(HANDLE *this)
{
  unsigned int v1; // ebx
  PVOID *v2; // rsi
  HANDLE CurrentProcess; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = this + 57;
  if ( !this[57] )
  {
    ViewSize = 0LL;
    SectionOffset.QuadPart = 0LL;
    CurrentProcess = GetCurrentProcess();
    v5 = NtMapViewOfSection(this[54], CurrentProcess, v2, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
    if ( v5 < 0 )
    {
      v1 = v5 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5 | 0x10000000, 0x143u, 0LL);
    }
  }
  return v1;
}
