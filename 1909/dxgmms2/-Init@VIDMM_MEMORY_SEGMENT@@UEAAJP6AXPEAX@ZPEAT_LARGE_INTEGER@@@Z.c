/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BD890
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0029950 (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00299A8 (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C00299F4 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C008B9A0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // r8
  DWORD LowPart; // edx
  char v9; // al
  __int64 v10; // rdx
  PHYSICAL_ADDRESS v11; // rcx
  __int64 v12; // rax
  VIDMM_CPU_HOST_APERTURE *v14; // rax
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebp
  int v26; // edx
  __int64 v27; // r8
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdi
  int v32; // edi
  unsigned int v33; // esi
  __int64 v34; // rax
  VIDMM_CPU_HOST_APERTURE *QuadPart; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD SystemInformation[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = this[2].LowPart;
    *(_QWORD *)(v6 + 32) = this;
  }
  v7 = this[1];
  LowPart = this[10].LowPart;
  if ( *(_DWORD *)(v7.QuadPart + 32) < 0x9006u )
  {
    LowPart &= ~0x10u;
    this[10].LowPart = LowPart;
  }
  if ( (LowPart & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)(v7.QuadPart + 24) + 308LL) & 8) != 0) )
    v9 = 1;
  v10 = LowPart | 0x10;
  BYTE2(this[59].u.LowPart) = v9;
  this[10].LowPart = v10;
  if ( (v10 & 0x40) != 0 )
  {
    v11.QuadPart = (unsigned int)(qword_1C004E468 - 0x800000);
    if ( this[8].QuadPart > (unsigned __int64)v11.QuadPart )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((PHYSICAL_ADDRESS)v11.QuadPart, v10);
      *(_QWORD *)(v12 + 24) = 272LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225473LL;
    }
    *(_QWORD *)(v7.QuadPart + 7032) += this[6].QuadPart;
    LODWORD(v10) = this[10].LowPart;
  }
  this[26] = this[6];
  if ( (v10 & 0x2000) != 0 )
  {
    v14 = (VIDMM_CPU_HOST_APERTURE *)operator new[](0x48uLL, 0x35346956u, PagedPool);
    if ( v14 )
      v16 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v14);
    else
      v16 = 0LL;
    this[61].QuadPart = (LONGLONG)v16;
    if ( !v16 )
    {
      _InterlockedIncrement(&dword_1C004E6E4);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 302LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
    v18 = VIDMM_CPU_HOST_APERTURE::Init(v16, (struct VIDMM_MEMORY_SEGMENT *)this, this[4].QuadPart, this[5].LowPart);
    v21 = v18;
    if ( v18 < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdAssertion(v22);
      return (unsigned int)v21;
    }
  }
  v25 = VIDMM_SEGMENT::Init(this, a2, 0LL);
  if ( v25 >= 0 && (this[10].LowPart & 0x2000) != 0 )
  {
    if ( this[11].LowPart )
    {
      v23 = *(_QWORD *)(this[1].QuadPart + 24);
      v24 = *(unsigned int *)(v23 + 308);
      if ( (v24 & 0x8000) != 0 && (v24 & 0x10000) != 0 )
      {
        memset(SystemInformation, 0, sizeof(SystemInformation));
        if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
        {
          if ( LODWORD(SystemInformation[3]) == 1 )
            goto LABEL_31;
          if ( LODWORD(SystemInformation[3]) == 2 )
          {
LABEL_30:
            v26 = 4;
LABEL_32:
            v27 = this[47].LowPart;
            v24 = 12LL;
            if ( v27 != 4096 )
              v24 = 16LL;
            v28 = SystemInformation[0] >> v24;
            v29 = (unsigned int)(LODWORD(SystemInformation[2]) * HIDWORD(SystemInformation[1]) * v26);
            LOBYTE(v3) = ((v27 - 1) & v29) != 0;
            v30 = (v29 >> v24) - 1 + (SystemInformation[0] >> v24) + v3;
            v23 = this[4].QuadPart >> v24;
            v31 = v23 + this[5].LowPart - 1;
            if ( v23 > SystemInformation[0] >> v24 )
              v28 = this[4].QuadPart >> v24;
            if ( v31 >= v30 )
              v31 = v30;
            if ( v28 <= v31 )
            {
              v32 = v31 - v28;
              v33 = v28 - v23;
              v34 = WdLogNewEntry5_WdEvent(v24, v23);
              *(_QWORD *)(v34 + 24) = v33;
              *(_QWORD *)(v34 + 32) = (unsigned int)(v32 + 1);
              WdLogEvent5_WdEvent(v34);
              QuadPart = (VIDMM_CPU_HOST_APERTURE *)this[61].QuadPart;
              this[11].HighPart = v33;
              this[12].LowPart = v33 + v32;
              v25 = VIDMM_CPU_HOST_APERTURE::BlockRange(
                      QuadPart,
                      (struct VIDMM_CPU_HOST_APERTURE_RANGE *)((char *)&this[11].QuadPart + 4));
            }
            goto LABEL_40;
          }
          v24 = (unsigned int)(LODWORD(SystemInformation[3]) - 3);
          if ( LODWORD(SystemInformation[3]) == 3 )
          {
LABEL_31:
            v26 = 3;
            goto LABEL_32;
          }
          if ( LODWORD(SystemInformation[3]) == 4 )
            goto LABEL_30;
        }
      }
    }
  }
LABEL_40:
  BYTE1(this[59].LowPart) = 1;
  v36 = WdLogNewEntry5_WdEvent(v24, v23);
  WdLogEvent5_WdEvent(v36);
  v39 = (_QWORD *)WdLogNewEntry5_WdEvent(v38, v37);
  v39[3] = this[6].QuadPart;
  v39[4] = this[3].HighPart;
  v39[5] = this[3].LowPart;
  v39[6] = this[2].LowPart;
  WdLogEvent5_WdEvent(v39);
  return (unsigned int)v25;
}
