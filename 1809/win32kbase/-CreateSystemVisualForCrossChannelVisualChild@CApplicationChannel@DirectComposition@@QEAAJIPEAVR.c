/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00015A0
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0001780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0001B64 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CE2C (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00107D4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0072220 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // r14
  DirectComposition::CVisualMarshaler *v7; // rax
  DirectComposition::CVisualMarshaler *v8; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v10; // rdx
  DirectComposition::CApplicationChannel *v11; // rax
  __int64 v12; // rax
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 157LL) )
    {
      v7 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x178uLL);
      v8 = v7;
      if ( v7 )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v7);
        *(_QWORD *)v8 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *((_DWORD *)v8 + 88) = 0;
        *((_QWORD *)v8 + 46) = (char *)v8 + 360;
        *((_QWORD *)v8 + 45) = (char *)v8 + 360;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        SystemResource = DirectComposition::CVisualMarshaler::Initialize(v8);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             *((DirectComposition::CConnection **)this + 5),
                             0x9Du,
                             (DirectComposition::CVisualMarshaler *)((char *)v8 + 352));
        if ( SystemResource < 0
          || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(this, v8), SystemResource < 0) )
        {
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 112LL))(
            v8,
            this);
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
          v8 = 0LL;
        }
        else
        {
          v10 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 32);
          v11 = (DirectComposition::CVisualMarshaler *)((char *)v8 + 360);
          if ( *v10 != (DirectComposition::CApplicationChannel *)((char *)this + 248) )
            __fastfail(3u);
          *(_QWORD *)v11 = (char *)this + 248;
          *((_QWORD *)v8 + 46) = v10;
          *v10 = v11;
          *((_QWORD *)this + 32) = v11;
        }
        if ( SystemResource < 0
          || (v12 = *(_QWORD *)v8,
              v14 = 0,
              SystemResource = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v12 + 248))(
                                 v8,
                                 this,
                                 v6,
                                 0LL,
                                 0LL,
                                 &v14),
              SystemResource < 0) )
        {
          if ( v8 )
            DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
        }
        else
        {
          if ( v14 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
          DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *((unsigned int *)v8 + 88));
          *(_DWORD *)a3 = *((_DWORD *)v8 + 88);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)SystemResource;
}
