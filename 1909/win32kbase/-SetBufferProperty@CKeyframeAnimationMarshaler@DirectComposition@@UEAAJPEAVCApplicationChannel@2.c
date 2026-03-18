/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0084ED0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0085090 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        LARGE_INTEGER *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  LARGE_INTEGER *v15; // r12
  DWORD LowPart; // ecx
  unsigned __int64 v17; // rdx
  DirectComposition::CResourceMarshaler *v18; // r14
  DWORD v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 == 22 )
  {
    if ( a5 == 8 )
    {
      this[33] = KeQueryPerformanceCounter(0LL);
      v11 = *a4;
      LOBYTE(this[35].LowPart) &= ~2u;
      this[34] = v11;
      *a6 = 1;
      this[2].LowPart &= ~0x1000u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 31 )
  {
    if ( a5 )
    {
      v12 = a5 / 0xC;
      if ( a5 == 12 * (a5 / 0xC) && !this[24].QuadPart && !this[25].LowPart )
      {
        v13 = Win32AllocPoolWithQuota(16LL * (unsigned int)v12, 0x666B4344u);
        if ( !v13 )
          return (unsigned int)-1073741801;
        this[24].QuadPart = v13;
        v20 = 0;
        if ( !(_DWORD)v12 )
        {
LABEL_23:
          *a6 = 1;
          this[2].LowPart &= ~0x10000u;
          return v6;
        }
        v14 = 0LL;
        v15 = a4 + 1;
        while ( 1 )
        {
          LowPart = v15[-1].LowPart;
          v17 = LowPart - 1;
          if ( LowPart && v17 < *((_QWORD *)a2 + 10) )
          {
            _mm_lfence();
            v18 = *(DirectComposition::CResourceMarshaler **)(v17 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
          }
          else
          {
            v18 = 0LL;
          }
          if ( !v18
            || (*(unsigned int (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v18 + 16LL))(v18) != 167 )
          {
            break;
          }
          DirectComposition::CResourceMarshaler::AddRef(v18);
          ++v20;
          *(_QWORD *)(this[24].QuadPart + v14) = v18;
          *(_DWORD *)(this[24].QuadPart + v14 + 8) = v15[-1].HighPart;
          v19 = v15->LowPart;
          v15 = (LARGE_INTEGER *)((char *)v15 + 12);
          *(_DWORD *)(this[24].QuadPart + v14 + 12) = v19;
          v14 += 16LL;
          ++this[25].LowPart;
          if ( v20 >= (unsigned int)v12 )
            goto LABEL_23;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                         (DirectComposition::CBaseExpressionMarshaler *)this,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6);
}
