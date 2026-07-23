/*
 * XREFs of MiCreateSystemSection @ 0x1400F599C
 * Callers:
 *     MiCreateSectionForDriver @ 0x140683460 (MiCreateSectionForDriver.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     SeCompareSigningLevels @ 0x14071AC50 (SeCompareSigningLevels.c)
 */

__int64 MiCreateSystemSection(__int64 *a1, __int64 a2, int a3, ...)
{
  char v5; // bl
  void *v6; // rdi
  int v7; // ebp
  int v8; // r13d
  __int64 v9; // r12
  int i; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  _KPROCESS *Process; // rcx
  char v18; // bp
  PACCESS_TOKEN v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v25; // [rsp+C0h] [rbp+28h]
  __int64 v26; // [rsp+C8h] [rbp+30h]
  __int64 v27; // [rsp+D0h] [rbp+38h]
  __int64 v28; // [rsp+D8h] [rbp+40h]
  __int64 v29; // [rsp+E0h] [rbp+48h]
  __int64 v30; // [rsp+E8h] [rbp+50h]
  __int64 v31; // [rsp+F0h] [rbp+58h]
  __int64 v32; // [rsp+F8h] [rbp+60h]
  __int64 v33; // [rsp+100h] [rbp+68h]
  va_list va1; // [rsp+108h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  if ( (_DWORD)v32 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v18 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    v19 = PsReferencePrimaryToken(Process);
    v22 = v33;
    v6 = v19;
    v5 = v18;
    if ( (_BYTE)v33 )
    {
      LOBYTE(v20) = v33;
      LOBYTE(v21) = v18;
      if ( !(unsigned int)SeCompareSigningLevels(v21, v20) )
        v5 = v22 & 0xF | v18 & 0x30;
    }
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  v7 = v31;
  v8 = v27;
  v9 = v28;
  for ( i = MiCreateSection((unsigned int)va, a3, 0, v25, v26, v27, (__int64)v6, v5, v28, 0LL, 0, v31, 0LL);
        ;
        i = MiCreateSection((unsigned int)va, a3, 0, v25, v26, v8, (__int64)v6, v5, v9, 0LL, 0, v7, 0LL) )
  {
    v11 = i;
    if ( i >= 0 )
    {
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x746C6644u);
      v12 = v23;
      *a1 = v23;
      v13 = MiSectionControlArea(v12);
      v14 = v13;
      if ( v13 && *(_QWORD *)(v13 + 64) )
      {
        v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v13);
        CcZeroEndOfLastPage(v15);
        MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
      }
      return v11;
    }
    if ( i != -1073741740 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return v11;
}
