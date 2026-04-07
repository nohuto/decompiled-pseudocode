/*
 * XREFs of ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002B940
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18002B890 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetKMTAdapterType@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002B9DC (-GetKMTAdapterType@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002BAD0 (-GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002BD9C (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::Initialize(CDWMDXGIAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int KMTDriverVersion; // eax
  int KMTAdapterType; // eax
  int v6; // eax
  int v7; // eax
  void *v9; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         (char *)this + 40);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x76u, v9);
  }
  else
  {
    KMTDriverVersion = CDWMDXGIAdapter::GetKMTDriverVersion(this);
    v3 = KMTDriverVersion;
    if ( KMTDriverVersion < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTDriverVersion, 0x77u, v9);
    }
    else
    {
      KMTAdapterType = CDWMDXGIAdapter::GetKMTAdapterType(this);
      v3 = KMTAdapterType;
      if ( KMTAdapterType < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KMTAdapterType, 0x78u, v9);
      }
      else
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
               *((_QWORD *)this + 3),
               &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
               (char *)this + 32);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7Au, v9);
        }
        else
        {
          v7 = CDWMDXGIAdapter::EnumerateDWMOutputs(this);
          v3 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x81u, v9);
        }
      }
    }
  }
  return v3;
}
