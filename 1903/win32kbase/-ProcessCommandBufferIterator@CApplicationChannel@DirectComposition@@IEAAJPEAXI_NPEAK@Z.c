/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C0011FC0 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0001320 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C00075B0 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0007858 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0011504 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0011DA8 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0012AF4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0013B2C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C0014074 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C007D0CC (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C0089194 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C009185C (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C0093F94 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C009432C (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     McTemplateK0qqqqq @ 0x1C011121C (McTemplateK0qqqqq.c)
 *     McTemplateK0x @ 0x1C0111E98 (McTemplateK0x.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01A5588 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C01A5788 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01A6504 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qx @ 0x1C01A6B4C (McTemplateK0qx.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        unsigned int *a2,
        unsigned __int64 a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  unsigned int v6; // r14d
  DirectComposition::CApplicationChannel *v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  int Resource; // edi
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  char *v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rbx
  char *v17; // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // r9
  unsigned int v23; // r15d
  unsigned __int64 v24; // rdx
  struct DirectComposition::CResourceMarshaler *v25; // rbx
  DirectComposition::CApplicationChannel *v26; // r15
  char v27; // al
  unsigned int *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // r12d
  unsigned int v31; // r13d
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned int *v34; // r15
  __int64 v35; // r10
  char *v36; // r9
  unsigned __int64 v37; // rdx
  unsigned int *v39; // rax
  unsigned int *v40; // rax
  __int64 v41; // rdx
  const unsigned int *v42; // r9
  unsigned __int64 v43; // rdx
  unsigned int *v44; // rax
  unsigned int v45; // r8d
  unsigned int *v46; // rax
  unsigned int *v47; // rax
  unsigned int *v48; // rax
  const struct tagMsgRoutingInfo *v49; // r9
  unsigned int *v50; // rax
  unsigned int *v51; // rax
  void *v52; // rbx
  char *v53; // rax
  char *v54; // r13
  size_t v55; // r12
  unsigned int *v56; // rax
  unsigned int *v57; // r10
  const unsigned __int64 *v58; // r9
  unsigned int v59; // ebx
  char v60; // al
  int v61; // ecx
  int v62; // r8d
  char v63; // al
  unsigned __int8 v64; // [rsp+40h] [rbp-88h] BYREF
  char v65[7]; // [rsp+41h] [rbp-87h] BYREF
  unsigned int *v66; // [rsp+48h] [rbp-80h]
  char v67; // [rsp+50h] [rbp-78h] BYREF
  char v68; // [rsp+51h] [rbp-77h] BYREF
  char v69[6]; // [rsp+52h] [rbp-76h] BYREF
  unsigned __int64 v70; // [rsp+58h] [rbp-70h]
  unsigned __int64 v71; // [rsp+60h] [rbp-68h]
  int v72; // [rsp+68h] [rbp-60h]
  void *v73; // [rsp+70h] [rbp-58h]
  __int64 v74; // [rsp+78h] [rbp-50h]
  __int64 v75; // [rsp+80h] [rbp-48h]
  DirectComposition::CApplicationChannel *v76; // [rsp+D0h] [rbp+8h]

  v76 = (DirectComposition::CApplicationChannel *)this;
  v5 = a4;
  v6 = a3;
  v8 = (DirectComposition::CApplicationChannel *)this;
  v9 = this;
  v70 = this;
  v10 = this;
  v71 = this;
  Resource = 0;
  while ( Resource >= 0 && v6 >= 4 )
  {
    a3 = (unsigned __int64)a5;
    ++*a5;
    v12 = a2;
    v66 = a2;
    v13 = *a2;
    if ( *a2 == 9 )
    {
      v17 = (char *)a2;
      if ( v6 < 0x10 )
      {
LABEL_182:
        Resource = -1073741811;
        goto LABEL_31;
      }
      a2 += 4;
      v6 -= 16;
      v18 = *((_DWORD *)v17 + 2);
      this = *((unsigned int *)v17 + 1);
      v64 = 0;
      v19 = (unsigned int)(this - 1);
      if ( !(_DWORD)this )
        goto LABEL_149;
      if ( v19 >= *((_QWORD *)v8 + 10) )
        goto LABEL_149;
      _mm_lfence();
      this = v19 * *((_QWORD *)v8 + 11);
      v20 = *(_QWORD *)(this + *((_QWORD *)v8 + 7));
      if ( !v20 )
        goto LABEL_149;
      Resource = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned __int8 *))(*(_QWORD *)v20 + 144LL))(
                   v20,
                   v18,
                   a5,
                   &v64);
      if ( Resource >= 0 && *(_QWORD *)(v20 + 32) )
      {
        v63 = DirectComposition::CApplicationChannel::UnbindAnimation(
                v76,
                (struct DirectComposition::CResourceMarshaler *)v20,
                v18);
        this = v64;
        if ( v63 )
          this = 1LL;
        v64 = this;
      }
      else
      {
        this = v64;
      }
      if ( Resource >= 0 )
      {
        if ( (_BYTE)this )
        {
          this = *(unsigned int *)(v20 + 16);
          if ( (this & 2) == 0 )
          {
            if ( (this & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 120LL))(v20, 167LL) )
                this = 416LL;
              else
                this = 408LL;
              *(_QWORD *)(v20 + 8) = *(_QWORD *)(v10 + this);
              *(_QWORD *)(v10 + this) = v20;
              LODWORD(this) = *(_DWORD *)(v20 + 16);
            }
            this = (unsigned int)this | 2;
            *(_DWORD *)(v20 + 16) = this;
            *((_BYTE *)v76 + 240) |= 1u;
          }
        }
      }
    }
    else
    {
      if ( v13 == 8 )
      {
        v21 = (char *)a2;
        if ( v6 < 0x18 )
        {
          Resource = -1073741811;
          goto LABEL_31;
        }
        a2 += 6;
        v6 -= 24;
        v22 = *((_QWORD *)v21 + 2);
        v23 = *((_DWORD *)v21 + 2);
        this = *((unsigned int *)v21 + 1);
        v65[0] = 0;
        v24 = (unsigned int)(this - 1);
        if ( !(_DWORD)this )
          goto LABEL_149;
        if ( v24 >= *((_QWORD *)v8 + 10) )
          goto LABEL_149;
        _mm_lfence();
        this = v24 * *((_QWORD *)v8 + 11);
        v25 = *(struct DirectComposition::CResourceMarshaler **)(this + *((_QWORD *)v8 + 7));
        if ( !v25 )
          goto LABEL_149;
        Resource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v25 + 136LL))(
                     v25,
                     v8,
                     v23,
                     v22,
                     v65);
        if ( Resource < 0 || !*((_QWORD *)v25 + 4) )
        {
          v26 = v76;
          goto LABEL_40;
        }
        v45 = v23;
        v26 = v76;
        if ( DirectComposition::CApplicationChannel::UnbindAnimation(v76, v25, v45) )
        {
          v27 = 1;
          v65[0] = 1;
        }
        else
        {
LABEL_40:
          v27 = v65[0];
        }
        if ( Resource >= 0 )
        {
          if ( v27 )
          {
            this = *((unsigned int *)v25 + 4);
            if ( (this & 2) == 0 )
            {
              if ( (this & 9) == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v25 + 120LL))(
                       v25,
                       167LL) )
                {
                  this = 416LL;
                }
                else
                {
                  this = 408LL;
                }
                *((_QWORD *)v25 + 1) = *(_QWORD *)(v10 + this);
                *(_QWORD *)(v10 + this) = v25;
                LODWORD(this) = *((_DWORD *)v25 + 4);
              }
              this = (unsigned int)this | 2;
              *((_DWORD *)v25 + 4) = this;
              *((_BYTE *)v26 + 240) |= 1u;
            }
          }
        }
        goto LABEL_29;
      }
      if ( v13 == 13 )
      {
        v28 = a2;
        if ( v6 < 0x10 )
        {
          Resource = -1073741811;
          goto LABEL_31;
        }
        a2 += 4;
        v6 -= 16;
        v29 = v28[3];
        v30 = v28[2];
        v31 = v28[1];
        v32 = 0LL;
        this = v31 - 1;
        if ( v31 && this < *((_QWORD *)v8 + 10) )
        {
          _mm_lfence();
          a3 = *((_QWORD *)v8 + 11);
          v33 = *((_QWORD *)v8 + 7);
          v34 = *(unsigned int **)(this * a3 + v33);
          if ( v34 )
          {
            if ( v29
              && ((this = v29 - 1, this >= *(_QWORD *)(v9 + 80)) || (this *= a3, (v32 = *(_QWORD *)(this + v33)) == 0)) )
            {
              Resource = -1073741811;
            }
            else
            {
              v69[0] = 0;
              Resource = (*(__int64 (__fastcall **)(unsigned int *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v34 + 176LL))(
                           v34,
                           v8,
                           v30,
                           v32,
                           v69);
              if ( Resource >= 0 )
              {
                if ( v69[0] )
                {
                  this = v34[4];
                  if ( (this & 2) == 0 )
                  {
                    if ( (this & 9) == 1 )
                    {
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v34 + 120LL))(
                             v34,
                             167LL) )
                      {
                        this = 416LL;
                      }
                      else
                      {
                        this = 408LL;
                      }
                      v43 = v71;
                      *((_QWORD *)v34 + 1) = *(_QWORD *)(v71 + this);
                      *(_QWORD *)(v43 + this) = v34;
                      LODWORD(this) = v34[4];
                    }
                    this = (unsigned int)this | 2;
                    v34[4] = this;
                    *((_BYTE *)v76 + 240) |= 1u;
                  }
                }
              }
            }
            goto LABEL_59;
          }
        }
        else
        {
          v34 = 0LL;
        }
        Resource = -1073741790;
LABEL_59:
        if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0
          && Resource >= 0
          && (*(unsigned __int8 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v34 + 120LL))(v34, 125LL)
          && (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
        {
          v59 = v34[6];
          v60 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v34 + 16LL))(v34);
          McTemplateK0qqqqq(
            v61,
            (unsigned int)&DCompResourcePropertyUpdate,
            v62,
            *((_DWORD *)v76 + 7),
            v59,
            v31,
            v60,
            v30);
          v9 = v70;
        }
        v12 = v66;
        v10 = v71;
        goto LABEL_31;
      }
      if ( v13 != 12 )
      {
        switch ( v13 )
        {
          case 0u:
            v52 = 0LL;
            v73 = 0LL;
            v53 = (char *)a2;
            if ( v6 >= 0x18 && v5 )
            {
              a2 += 6;
              v6 -= 24;
              v54 = (char *)*((_QWORD *)v53 + 1);
              v55 = *((unsigned int *)v53 + 4);
              v72 = v55;
              if ( !(_DWORD)v55 )
                Resource = -1073741811;
              if ( Resource >= 0 )
              {
                v52 = (void *)Win32AllocPoolWithQuota(v55, 1717715780LL);
                v73 = v52;
                v12 = v66;
                if ( !v52 )
                {
                  Resource = -1073741801;
LABEL_127:
                  v10 = v71;
                  goto LABEL_128;
                }
                if ( &v54[v55] < v54 || (unsigned __int64)&v54[v55] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v52, v54, v55);
                v12 = v66;
                a3 = (unsigned __int64)a5;
                v8 = v76;
              }
              if ( Resource >= 0 )
              {
                Resource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                             v8,
                             v52,
                             v55,
                             0,
                             (unsigned int *)a3);
                v12 = v66;
              }
              goto LABEL_127;
            }
            Resource = -1073741811;
LABEL_128:
            if ( !v52 )
              goto LABEL_30;
            Win32FreePool(v52);
            break;
          case 1u:
            v39 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              Resource = DirectComposition::CApplicationChannel::CreateResource(v8, v39[1], v39[2], v39[3] != 0);
              v12 = v66;
            }
            goto LABEL_31;
          case 2u:
            this = (unsigned __int64)a2;
            if ( v6 < 0x18 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 6;
              v6 -= 24;
              Resource = DirectComposition::CApplicationChannel::OpenSharedResource(
                           v8,
                           *(_DWORD *)(this + 4),
                           *(void **)(this + 8),
                           *(_DWORD *)(this + 16),
                           *(_DWORD *)(this + 20) != 0);
              v12 = v66;
            }
            goto LABEL_31;
          case 3u:
            v40 = a2;
            if ( v6 < 8 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 2;
              v6 -= 8;
              Resource = DirectComposition::CApplicationChannel::ReleaseResource(v8, v40[1]);
              v12 = v66;
            }
            goto LABEL_31;
          case 4u:
            v56 = a2;
            if ( v6 >= 0x18 )
            {
              a2 += 6;
              v6 -= 24;
              Resource = DirectComposition::CApplicationChannel::GetAnimationTime(
                           v8,
                           v56[1],
                           *((_QWORD *)v56 + 1),
                           (__int64 *)v56 + 2);
              v12 = v66;
            }
            else
            {
              Resource = -1073741811;
            }
            goto LABEL_31;
          case 5u:
            this = (unsigned __int64)a2;
            if ( v6 >= 0x18 )
            {
              a2 += 6;
              v6 -= 24;
              Resource = DirectComposition::CApplicationChannel::CapturePointer(
                           v8,
                           *(unsigned int *)(this + 4),
                           *(unsigned int *)(this + 8),
                           *(unsigned int *)(this + 12),
                           *(_QWORD *)(this + 16));
              v12 = v66;
            }
            else
            {
              Resource = -1073741811;
            }
            goto LABEL_31;
          case 6u:
            v46 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              Resource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(v8, v46[1], (void **)v46 + 1);
              v12 = v66;
            }
            goto LABEL_31;
          case 7u:
            v14 = (char *)a2;
            if ( v6 < 0xC )
            {
              Resource = -1073741811;
              goto LABEL_31;
            }
            a2 += 3;
            v6 -= 12;
            v15 = *((unsigned int *)v14 + 2);
            this = *((unsigned int *)v14 + 1);
            v67 = 0;
            a3 = (unsigned int)(this - 1);
            if ( !(_DWORD)this )
              goto LABEL_149;
            if ( a3 >= *((_QWORD *)v8 + 10) )
              goto LABEL_149;
            _mm_lfence();
            this = a3 * *((_QWORD *)v8 + 11);
            v16 = *(unsigned int **)(this + *((_QWORD *)v8 + 7));
            if ( !v16 )
              goto LABEL_149;
            Resource = (*(__int64 (__fastcall **)(unsigned int *, __int64, char *, unsigned __int64))(*(_QWORD *)v16 + 192LL))(
                         v16,
                         v15,
                         &v67,
                         0x1C0000000uLL);
            if ( Resource < 0 )
              goto LABEL_29;
            if ( !v67 )
              goto LABEL_29;
            this = v16[4];
            if ( (this & 2) != 0 )
              goto LABEL_29;
            if ( (this & 9) != 1 )
              goto LABEL_74;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v16 + 120LL))(v16, 167LL) )
            {
              this = 416LL;
              goto LABEL_73;
            }
            goto LABEL_72;
          case 0xAu:
            v47 = a2;
            if ( v6 < 0x18 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 6;
              v6 -= 24;
              Resource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                           v8,
                           v47[1],
                           v47[2],
                           *((void **)v47 + 2));
              v12 = v66;
            }
            goto LABEL_31;
          case 0xBu:
            v57 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
              goto LABEL_31;
            }
            a2 += 4;
            v6 -= 16;
            a3 = v57[3];
            v75 = (v57[3] * (unsigned __int128)8uLL) >> 64;
            this = 8 * a3;
            if ( is_mul_ok(a3, 8uLL) )
            {
              v74 = 8 * a3;
              Resource = 0;
            }
            else
            {
              v74 = -1LL;
              Resource = -1073741675;
              this = -1LL;
            }
            if ( Resource < 0 )
              goto LABEL_160;
            if ( v6 >= this )
            {
              v58 = (const unsigned __int64 *)a2;
              a2 = (unsigned int *)((char *)a2 + this);
              v6 -= this;
              Resource = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                           v8,
                           v57[1],
                           v57[2],
                           v58,
                           a3);
              v12 = v66;
            }
            else
            {
              Resource = -1073741811;
LABEL_160:
              v12 = v57;
            }
            goto LABEL_31;
          case 0xEu:
            this = (unsigned __int64)a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              a3 = *(unsigned int *)(this + 12);
              v41 = 4 * a3;
              if ( v6 < 4 * a3 )
              {
                Resource = -1073741811;
                v12 = (unsigned int *)this;
              }
              else
              {
                v42 = a2;
                a2 = (unsigned int *)((char *)a2 + v41);
                v6 -= v41;
                Resource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                             v8,
                             *(_DWORD *)(this + 4),
                             *(_DWORD *)(this + 8),
                             v42,
                             *(unsigned int *)(this + 12));
                v12 = v66;
              }
            }
            goto LABEL_31;
          case 0xFu:
            v50 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              Resource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                           v8,
                           v50[1],
                           v50[2],
                           v50[3]);
              v12 = v66;
            }
            goto LABEL_31;
          case 0x10u:
            v48 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              Resource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                           v8,
                           v48[1],
                           *((_QWORD *)v48 + 1));
              v12 = v66;
            }
            goto LABEL_31;
          case 0x11u:
            this = (unsigned __int64)a2;
            if ( v6 < 0x14 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 5;
              v6 -= 20;
              Resource = DirectComposition::CApplicationChannel::AddVisualChild(
                           v8,
                           *(_DWORD *)(this + 4),
                           *(_DWORD *)(this + 8),
                           *(_DWORD *)(this + 12),
                           *(_DWORD *)(this + 16));
              v12 = v66;
            }
            goto LABEL_31;
          case 0x12u:
            this = (unsigned __int64)a2;
            if ( v6 < 0x48 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 18;
              v6 -= 72;
              if ( *(_DWORD *)(this + 24) )
                v49 = (const struct tagMsgRoutingInfo *)(this + 32);
              else
                v49 = 0LL;
              Resource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                           v8,
                           *(_DWORD *)(this + 4),
                           *(HWND *)(this + 8),
                           v49,
                           *(_DWORD *)(this + 16),
                           *(_DWORD *)(this + 20));
              v12 = v66;
            }
            goto LABEL_31;
          case 0x13u:
            v51 = a2;
            if ( v6 < 0x10 )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 4;
              v6 -= 16;
              Resource = DirectComposition::CApplicationChannel::SetVisualInputSink(v8, v51[1], *((void **)v51 + 1));
              v12 = v66;
            }
            goto LABEL_31;
          case 0x14u:
            v44 = a2;
            if ( v6 < 0xC )
            {
              Resource = -1073741811;
            }
            else
            {
              a2 += 3;
              v6 -= 12;
              Resource = DirectComposition::CApplicationChannel::RemoveVisualChild(v8, v44[1], v44[2]);
              v12 = v66;
            }
            goto LABEL_31;
          default:
            goto LABEL_182;
        }
        goto LABEL_29;
      }
      if ( v6 < 0x10
        || (a2 += 4,
            v6 -= 16,
            v35 = v12[3],
            this = ((_DWORD)v35 + 3) & 0xFFFFFFFC,
            (unsigned int)this < (unsigned int)v35)
        || v6 < (unsigned int)this )
      {
        Resource = -1073741811;
        goto LABEL_31;
      }
      v36 = (char *)a2;
      a2 = (unsigned int *)((char *)a2 + (unsigned int)this);
      v6 -= this;
      a3 = v12[2];
      this = v12[1];
      v37 = (unsigned int)(this - 1);
      if ( !(_DWORD)this
        || v37 >= *((_QWORD *)v8 + 10)
        || (_mm_lfence(),
            this = v37 * *((_QWORD *)v8 + 11),
            (v16 = *(unsigned int **)(this + *((_QWORD *)v8 + 7))) == 0LL) )
      {
LABEL_149:
        Resource = -1073741790;
        goto LABEL_29;
      }
      v68 = 0;
      Resource = (*(__int64 (__fastcall **)(unsigned int *, DirectComposition::CApplicationChannel *, unsigned __int64, char *, __int64, char *))(*(_QWORD *)v16 + 168LL))(
                   v16,
                   v8,
                   a3,
                   v36,
                   v35,
                   &v68);
      if ( Resource >= 0 )
      {
        if ( v68 )
        {
          this = v16[4];
          if ( (this & 2) == 0 )
          {
            if ( (this & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v16 + 120LL))(v16, 167LL) )
                this = 416LL;
              else
LABEL_72:
                this = 408LL;
LABEL_73:
              *((_QWORD *)v16 + 1) = *(_QWORD *)(v10 + this);
              *(_QWORD *)(v10 + this) = v16;
              LODWORD(this) = v16[4];
            }
LABEL_74:
            this = (unsigned int)this | 2;
            v16[4] = this;
            *((_BYTE *)v76 + 240) |= 1u;
          }
        }
      }
    }
LABEL_29:
    v12 = v66;
LABEL_30:
    v9 = v70;
LABEL_31:
    v8 = v76;
    v5 = a4;
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    {
      McTemplateK0qx(this, v12, a3, *v12, Resource);
      v8 = v76;
      v5 = a4;
    }
  }
  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    McTemplateK0x(this, &DCompCommandsInBatch, a3, *a5);
  if ( Resource >= 0 && v6 )
    return (unsigned int)-1073741811;
  return (unsigned int)Resource;
}
