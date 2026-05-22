/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x1800990E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x18009AD34 (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetScalarValue(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3)
{
  unsigned int v5; // ebx
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  v5 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    for ( i = this[5]; i; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( *((_BYTE *)i + 32) )
      {
        v8 = BamoImpl::BamoDataSourceStubImpl::SetScalarValue(i, a2, a3);
        if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -2018375675 )
        {
          v9 = wil::verify_hresult<long>(v8);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2304,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
            (const char *)v9);
          JUMPOUT(0x1800991BALL);
        }
      }
    }
  }
  else
  {
    v5 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return v5;
}
