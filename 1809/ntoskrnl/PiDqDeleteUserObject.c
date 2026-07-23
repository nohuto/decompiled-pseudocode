/*
 * XREFs of PiDqDeleteUserObject @ 0x14082BE9C
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14082BFAC (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PiDqDeleteUserObject(char *a1, __int64 a2, int a3)
{
  int RelativeObjectRegPath; // ebp
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int i; // edi
  wchar_t *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, (PVOID *)&Str);
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_19;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0LL;
  RelativeObjectRegPath = RegRtlDeleteTreeInternal(a1, Str, v7, 0);
  v8 = 2;
  v9 = a3 - 1;
  if ( !v9 )
    goto LABEL_9;
  if ( v9 != 2 )
  {
    v8 = 0;
LABEL_9:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_10;
  }
  v8 = 1;
LABEL_10:
  for ( i = 0; i < v8; ++i )
  {
    v11 = wcsrchr(Str, 0x5Cu);
    if ( v11 )
    {
      *v11 = 0;
      if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      if ( (int)RegRtlDeleteKeyTransacted(a1, Str, v13) < 0 )
        break;
    }
  }
LABEL_19:
  if ( Str )
    ExFreePoolWithTag(Str, 0x58706E50u);
  return (unsigned int)RelativeObjectRegPath;
}
