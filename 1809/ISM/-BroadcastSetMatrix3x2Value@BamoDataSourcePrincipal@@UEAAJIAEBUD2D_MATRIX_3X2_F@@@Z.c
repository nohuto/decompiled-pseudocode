/*
 * XREFs of ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180099640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009B35C (-SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetMatrix3x2Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  unsigned int v6; // ebx
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rdi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  v6 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    for ( i = this[5]; i; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( *((_BYTE *)i + 32) )
      {
        v9 = BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value(i, a2, a3);
        if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2018375675 )
        {
          v10 = wil::verify_hresult<long>(v9);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x23AC,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
            (const char *)v10);
          JUMPOUT(0x180099711LL);
        }
      }
    }
  }
  else
  {
    v6 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2207,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return v6;
}
