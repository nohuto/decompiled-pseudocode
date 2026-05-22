/*
 * XREFs of ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x1800992C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x18009AF0C (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector3Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  unsigned int v7; // ebx
  struct Microsoft::BamoImpl::ConnectionIndirector *v9; // rdi
  float v10; // xmm6_4
  unsigned int v11; // ecx
  unsigned int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v14; // [rsp+70h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v14, this[3]);
  v7 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    v9 = this[5];
    if ( v9 )
    {
      v10 = a5;
      do
      {
        if ( *((_BYTE *)v9 + 32) )
        {
          v11 = BamoImpl::BamoDataSourceStubImpl::SetVector3Value(v9, a2, a3, a4, v10);
          if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -2018375675 )
          {
            v12 = wil::verify_hresult<long>(v11);
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x233B,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
              (const char *)v12);
            JUMPOUT(0x1800993C5LL);
          }
        }
        v9 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)v9 + 6);
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21BE,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v14);
  return v7;
}
