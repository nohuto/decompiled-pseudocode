/*
 * XREFs of ?SetReferenceProperty@CParticleBehaviorsMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B7740
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetReferenceProperty(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // edi
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  struct DirectComposition::CResourceMarshaler **v12; // r14
  unsigned int v13; // ebx
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  struct DirectComposition::CResourceMarshaler *v17; // rdx

  v8 = 0;
  *a5 = 0;
  if ( a3 <= 5 )
  {
    if ( a3 == 5 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              118LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFF000) + 4096;
      goto LABEL_70;
    }
    if ( !a3 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              120LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFFF80) + 128;
      goto LABEL_70;
    }
    v9 = a3 - 1;
    if ( !v9 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              118LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFFF00) + 256;
      goto LABEL_70;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              118LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFFE00) + 512;
      goto LABEL_70;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              121LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFFC00) + 1024;
      goto LABEL_70;
    }
    if ( v11 == 1 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              114LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 88);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFF800) + 2048;
      goto LABEL_70;
    }
    return (unsigned int)-1073741811;
  }
  v14 = a3 - 6;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              119LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFFC000) + 0x4000;
      goto LABEL_70;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              119LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFF8000) + 0x8000;
      goto LABEL_70;
    }
    if ( v16 == 1 )
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              118LL) )
      {
        v8 = -1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 128);
      if ( v8 < 0 )
        v12 = 0LL;
      v13 = ((v8 >> 31) & 0xFFFF0000) + 0x10000;
      goto LABEL_70;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          120LL) )
  {
    return (unsigned int)-1073741811;
  }
  v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 104);
  v13 = 0x2000;
LABEL_70:
  if ( v13 )
  {
    if ( v8 >= 0 )
    {
      v17 = *v12;
      if ( *v12 != a4 )
      {
        if ( v17 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
          *v12 = 0LL;
        }
        if ( a4 )
        {
          *v12 = a4;
          DirectComposition::CResourceMarshaler::AddRef(a4);
        }
        *((_DWORD *)this + 4) |= v13;
        *a5 = 1;
      }
    }
  }
  return (unsigned int)v8;
}
