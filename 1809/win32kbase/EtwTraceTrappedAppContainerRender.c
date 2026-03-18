/*
 * XREFs of EtwTraceTrappedAppContainerRender @ 0x1C0107ED0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0107C08 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     McTemplateK0szsz @ 0x1C010840C (McTemplateK0szsz.c)
 */

void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2)
{
  PACCESS_TOKEN v4; // r15
  PACCESS_TOKEN v5; // rsi
  int v6; // eax
  char v7; // cl
  const WCHAR *v8; // rsi
  const WCHAR *v9; // r12
  void *ProcessImageFileName; // r14
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  const WCHAR *v15; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  char v20; // [rsp+A8h] [rbp+48h] BYREF

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    v17 = 256LL;
    v18 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v15);
    if ( v16 )
    {
      if ( !v15 )
      {
LABEL_22:
        if ( v16 )
          Win32FreePool((__int64)v16);
        return;
      }
      v20 = 0;
      v19 = 0;
      v4 = 0LL;
      v5 = PsReferencePrimaryToken(Process);
      RtlQueryPackageIdentity(v5, v16, &v17, 0LL, 0LL, &v20);
      PsDereferencePrimaryToken(v5);
      if ( a2 )
      {
        v4 = PsReferencePrimaryToken(a2);
        v6 = RtlQueryPackageIdentity(v4, v15, &v18, 0LL, 0LL, &v19);
        v7 = v19;
        if ( v6 < 0 )
          v7 = 0;
        v19 = v7;
      }
      else
      {
        v7 = v19;
      }
      if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
      {
        v8 = &word_1C01944BC;
        v9 = &word_1C01944BC;
        if ( v7 )
          v9 = v15;
        if ( a2 )
          ProcessImageFileName = (void *)PsGetProcessImageFileName(a2);
        else
          ProcessImageFileName = &unk_1C01A3F2C;
        if ( v20 )
          v8 = v16;
        v11 = PsGetProcessImageFileName(Process);
        McTemplateK0szsz(v13, v12, v14, v11, (__int64)v8, (__int64)ProcessImageFileName, (__int64)v9);
      }
      if ( v4 )
        PsDereferencePrimaryToken(v4);
    }
    if ( v15 )
      Win32FreePool((__int64)v15);
    goto LABEL_22;
  }
}
