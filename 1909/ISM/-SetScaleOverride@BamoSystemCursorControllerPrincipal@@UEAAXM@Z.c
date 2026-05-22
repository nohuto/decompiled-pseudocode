/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x1800234A0
 * Callers:
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180022D48 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800CA9E0 (-UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoSystemCursorControllerPrincipal::SetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        float a2)
{
  float *v2; // rsi
  __int64 i; // rbx
  int v4; // edi
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = (float *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v7, this[3]);
  v2[10] = a2;
  for ( i = *((_QWORD *)v2 + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoSystemCursorControllerPrincipalImpl *)v2);
      v4 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_4:
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33A5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4,
      -2);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7);
}
