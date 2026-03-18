/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C013F4DC
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00196F0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqqt @ 0x1C0036524 (McTemplateK0ppqqt.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C013F664 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C013F684 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  int PreviousConfigIndex; // r15d
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  const GUID *v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  _BYTE v30[72]; // [rsp+40h] [rbp-48h] BYREF
  const struct DXGALLOCATION *v31; // [rsp+A0h] [rbp+18h] BYREF

  v31 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (ADAPTER_DISPLAY *)((char *)this + 504), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v5 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 14);
    do
    {
      v7 = 0;
      v8 = 3968LL * v5;
      v9 = v6;
      if ( *(_DWORD *)(v8 + v6 + 3736) )
      {
        do
        {
          LODWORD(v31) = 0;
          v11 = 1;
          DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                     (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(168LL * v7 + v8 + 1120 + v6),
                                     (int *)&v31);
          if ( DisplayPlaneConfigHead )
          {
            PreviousConfigIndex = (int)v31;
            while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
            {
              v11 = 0;
              v18 = v8 + v16 + *((_QWORD *)this + 14);
              if ( *(_DWORD *)(v18 + 1120) == -1 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v13, v12);
                *(_QWORD *)(v20 + 24) = 9035LL;
                WdLogEvent5_WdAssertion(v20);
              }
              v19 = *(_DWORD *)(v18 + 1124);
              if ( v19 == -1 )
              {
                v21 = WdLogNewEntry5_WdAssertion(v13, v12);
                *(_QWORD *)(v21 + 24) = 9036LL;
                WdLogEvent5_WdAssertion(v21);
                v19 = *(_DWORD *)(v18 + 1124);
              }
              if ( PreviousConfigIndex == v19 )
                goto LABEL_19;
              PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
              v13 = 80LL * PreviousConfigIndex;
              DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(v13 + v18 + 1128);
              if ( !DisplayPlaneConfigHead )
                goto LABEL_19;
              v16 = 168LL * v7;
            }
            *(_QWORD *)DisplayPlaneConfigHead = 0LL;
            if ( v11 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
              v22[4] = v5;
              v22[5] = v7;
              v22[3] = a2;
              WdLogEvent5_WdWarning(v22);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v25 = *((_QWORD *)this + 14);
                LODWORD(v29) = *(unsigned __int8 *)(v25 + v8 + 721);
                LODWORD(v28) = v7;
                LODWORD(v27) = v5;
                McTemplateK0ppqqt(
                  *(unsigned __int8 *)(v25 + v8 + 721),
                  v23,
                  v24,
                  *((_QWORD *)this + 2),
                  a2,
                  v27,
                  v28,
                  v29);
              }
            }
            *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
          }
LABEL_19:
          v9 = *((_QWORD *)this + 14);
          ++v7;
          v6 = v9;
        }
        while ( v7 < *(_DWORD *)(v8 + v9 + 3736) );
      }
      v10 = 0;
      v6 = v9;
      if ( *(_DWORD *)(v8 + v9 + 3740) )
      {
        v6 = *((_QWORD *)this + 14);
        do
        {
          if ( *(_BYTE *)(v10 + v8 + v9 + 2880) )
          {
            v26 = v8 + 80LL * v10;
            if ( (*(_DWORD *)(v26 + v9 + 2904) & 1) != 0 && *(const struct DXGALLOCATION **)(v26 + v9 + 2896) == a2 )
            {
              *(_QWORD *)(v26 + v9 + 2896) = 0LL;
              *(_BYTE *)(v10 + *((_QWORD *)this + 14) + v8 + 2880) = 0;
              *(_DWORD *)(v26 + *((_QWORD *)this + 14) + 2904) &= ~1u;
              v6 = *((_QWORD *)this + 14);
            }
          }
          ++v10;
          v9 = v6;
        }
        while ( v10 < *(_DWORD *)(v8 + v6 + 3740) );
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 20) );
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
}
