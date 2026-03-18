/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C0062230 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C000DBE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C00108D0 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0019104 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0019278 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C00193C0 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0019564 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00196A4 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z @ 0x1C0019744 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z.c)
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C001980C (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C00198EC (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0033E3C (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0071B9C (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C007C86C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C007E308 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C007E998 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C0080A9C (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C008162C (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     McTemplateK0x @ 0x1C00EB524 (McTemplateK0x.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01684CC (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0168650 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0169048 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qx @ 0x1C0169624 (McTemplateK0qx.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        DirectComposition::CApplicationChannel *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        char a5)
{
  unsigned __int128 v5; // rax
  char v6; // r10
  unsigned int v7; // edi
  unsigned int *v8; // rsi
  DirectComposition::CApplicationChannel *v9; // r12
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // r9d
  void *v18; // r15
  unsigned int *v19; // rax
  unsigned int v20; // eax
  ULONG64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int *v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int *v34; // rax
  const unsigned int *v35; // r9
  unsigned int *v36; // rax
  unsigned int v37; // ecx
  unsigned int *v38; // r9
  unsigned int *v39; // r10
  unsigned __int64 v40; // rcx
  const unsigned __int64 *v41; // r9
  unsigned int *v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int *v46; // rax
  unsigned int *v47; // rax
  unsigned int Size; // [rsp+30h] [rbp-68h]
  DirectComposition::CApplicationChannel *v50; // [rsp+38h] [rbp-60h]
  void *Src; // [rsp+48h] [rbp-50h]

  *((_QWORD *)&v5 + 1) = a2;
  v6 = a5;
  v7 = a3;
  v8 = (unsigned int *)*((_QWORD *)&v5 + 1);
  v9 = this;
  v10 = 0;
  while ( v10 >= 0 && v7 >= 4 )
  {
    ++*a4;
    this = (DirectComposition::CApplicationChannel *)v8;
    v50 = (DirectComposition::CApplicationChannel *)v8;
    v11 = *v8;
    if ( *v8 <= 0xA )
    {
      if ( v11 == 10 )
      {
        v29 = v8;
        if ( v7 < 0x18 )
          goto LABEL_95;
        v8 += 6;
        v7 -= 24;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                        v9,
                        v29[1],
                        v29[2],
                        *((void **)v29 + 2));
        goto LABEL_15;
      }
      if ( v11 > 5 )
      {
        v22 = v11 - 6;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 != 1 )
                goto LABEL_95;
              v25 = v8;
              if ( v7 < 0x10 )
                goto LABEL_95;
              v8 += 4;
              v7 -= 16;
              LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceFloatProperty(
                              v9,
                              v25[1],
                              v25[2],
                              *((float *)v25 + 3));
            }
            else
            {
              v26 = v8;
              if ( v7 < 0x18 )
                goto LABEL_95;
              v8 += 6;
              v7 -= 24;
              LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceIntegerProperty(v9, v26[1], v26[2]);
            }
          }
          else
          {
            v27 = v8;
            if ( v7 < 0xC )
              goto LABEL_95;
            v8 += 3;
            v7 -= 12;
            LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceCallbackId(v9, v27[1], v27[2]);
          }
        }
        else
        {
          v28 = v8;
          if ( v7 < 0x10 )
            goto LABEL_95;
          v8 += 4;
          v7 -= 16;
          LODWORD(v5) = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(v9, v28[1], (void **)v28 + 1);
        }
        goto LABEL_15;
      }
      if ( v11 == 5 )
      {
        if ( v7 < 0x18 )
          goto LABEL_105;
        v8 += 6;
        v7 -= 24;
        LODWORD(v5) = DirectComposition::CApplicationChannel::CapturePointer(
                        v9,
                        *((unsigned int *)this + 1),
                        *((unsigned int *)this + 2),
                        *((unsigned int *)this + 3),
                        *((_QWORD *)this + 2));
        goto LABEL_15;
      }
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 != 1 )
                goto LABEL_95;
              v15 = v8;
              if ( v7 < 0x18 )
                goto LABEL_95;
              v8 += 6;
              v7 -= 24;
              LODWORD(v5) = DirectComposition::CApplicationChannel::GetAnimationTime(
                              v9,
                              v15[1],
                              *((_QWORD *)v15 + 1),
                              (__int64 *)v15 + 2);
            }
            else
            {
              v16 = v8;
              if ( v7 < 8 )
                goto LABEL_95;
              v8 += 2;
              v7 -= 8;
              LODWORD(v5) = DirectComposition::CApplicationChannel::ReleaseResource(v9, v16[1]);
            }
          }
          else
          {
            if ( v7 < 0x18 )
              goto LABEL_105;
            v17 = v8[4];
            if ( v17 - 1 > 0xA5 )
              goto LABEL_105;
            v8 += 6;
            v7 -= 24;
            LODWORD(v5) = DirectComposition::CApplicationChannel::OpenSharedResource(
                            v9,
                            *((_DWORD *)this + 1),
                            *((void **)this + 1),
                            v17,
                            *((_DWORD *)this + 5) != 0);
          }
        }
        else
        {
          if ( v7 < 0x10 )
            goto LABEL_105;
          a3 = v8[2];
          if ( (unsigned int)(a3 - 1) > 0xA5 )
            goto LABEL_105;
          v8 += 4;
          v7 -= 16;
          LODWORD(v5) = DirectComposition::CApplicationChannel::CreateResource(
                          v9,
                          *((_DWORD *)this + 1),
                          a3,
                          *((_DWORD *)this + 3) != 0);
        }
        goto LABEL_15;
      }
      v18 = 0LL;
      v19 = v8;
      if ( v7 >= 0x18 && v6 )
      {
        v8 += 6;
        v7 -= 24;
        Src = (void *)*((_QWORD *)v19 + 1);
        v20 = v19[4];
        Size = v20;
        if ( !v20 )
LABEL_33:
          v10 = -1073741811;
        if ( v10 >= 0 )
        {
          v18 = (void *)Win32AllocPoolWithQuota(v20, 0x66624344u);
          if ( !v18 )
            v10 = -1073741801;
          if ( v10 >= 0 )
          {
            v21 = (ULONG64)Src + Size;
            if ( v21 < (unsigned __int64)Src || v21 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v18, Src, Size);
            v10 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(v9, v18, Size, 0, a4);
          }
        }
        if ( v18 )
          Win32FreePool((__int64)v18);
        goto LABEL_16;
      }
      v20 = Size;
      goto LABEL_33;
    }
    if ( v11 > 0x10 )
    {
      v43 = v11 - 17;
      if ( !v43 )
      {
        if ( v7 < 0x14 )
          goto LABEL_105;
        v8 += 5;
        v7 -= 20;
        v10 = DirectComposition::CApplicationChannel::AddVisualChild(
                v9,
                *((_DWORD *)this + 1),
                *((_DWORD *)this + 2),
                *((_DWORD *)this + 3),
                *((_DWORD *)this + 4));
        if ( v10 >= 0 )
          *((_BYTE *)v9 + 241) |= 1u;
        goto LABEL_16;
      }
      v44 = v43 - 1;
      if ( !v44 )
      {
        *((_QWORD *)&v5 + 1) = v8;
        if ( v7 < 0x48 )
          goto LABEL_95;
        v8 += 18;
        v7 -= 72;
        LODWORD(v5) = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                        v9,
                        *(_DWORD *)(*((_QWORD *)&v5 + 1) + 4LL),
                        *(HWND *)(*((_QWORD *)&v5 + 1) + 8LL),
                        (const struct tagMsgRoutingInfo *)((*((_QWORD *)&v5 + 1) + 32LL) & -(__int64)(*(_DWORD *)(*((_QWORD *)&v5 + 1) + 24LL) != 0)),
                        *(_DWORD *)(*((_QWORD *)&v5 + 1) + 16LL),
                        *(_DWORD *)(*((_QWORD *)&v5 + 1) + 20LL));
        goto LABEL_15;
      }
      v45 = v44 - 1;
      if ( !v45 )
      {
        v47 = v8;
        if ( v7 < 0x10 )
          goto LABEL_95;
        v8 += 4;
        v7 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetVisualInputSink(v9, v47[1], *((void **)v47 + 1));
        goto LABEL_15;
      }
      if ( v45 != 1 || (v46 = v8, v7 < 0xC) )
      {
LABEL_95:
        v10 = -1073741811;
        goto LABEL_18;
      }
      v8 += 3;
      v7 -= 12;
      LODWORD(v5) = DirectComposition::CApplicationChannel::RemoveVisualChild(v9, v46[1], v46[2]);
    }
    else
    {
      if ( v11 == 16 )
      {
        v42 = v8;
        if ( v7 < 0x10 )
          goto LABEL_95;
        v8 += 4;
        v7 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                        v9,
                        v42[1],
                        *((_QWORD *)v42 + 1));
        goto LABEL_15;
      }
      v30 = v11 - 11;
      if ( !v30 )
      {
        v39 = v8;
        if ( v7 >= 0x10 )
        {
          v8 += 4;
          v7 -= 16;
          a3 = v39[3];
          v5 = v39[3] * (unsigned __int128)8uLL;
          v40 = 8 * a3;
          if ( is_mul_ok(a3, 8uLL) )
          {
            v10 = 0;
          }
          else
          {
            v40 = -1LL;
            v10 = -1073741675;
          }
          if ( v10 >= 0 )
          {
            if ( v7 < v40 )
              v10 = -1073741811;
            if ( v10 >= 0 )
            {
              v41 = (const unsigned __int64 *)v8;
              v8 = (unsigned int *)((char *)v8 + v40);
              v7 -= v40;
              LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                              v9,
                              v39[1],
                              v39[2],
                              v41,
                              a3);
              goto LABEL_15;
            }
          }
          this = (DirectComposition::CApplicationChannel *)v39;
        }
        else
        {
          v10 = -1073741811;
        }
LABEL_17:
        v6 = a5;
        goto LABEL_18;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        *((_QWORD *)&v5 + 1) = v8;
        if ( v7 < 0x10 )
          goto LABEL_95;
        v8 += 4;
        v7 -= 16;
        a3 = *(unsigned int *)(*((_QWORD *)&v5 + 1) + 12LL);
        v37 = (a3 + 3) & 0xFFFFFFFC;
        if ( v37 < (unsigned int)a3 || v7 < v37 )
        {
          v10 = -1073741811;
          this = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v5 + 1);
          goto LABEL_18;
        }
        v38 = v8;
        v8 = (unsigned int *)((char *)v8 + v37);
        v7 -= v37;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                        v9,
                        *(_DWORD *)(*((_QWORD *)&v5 + 1) + 4LL),
                        *(_DWORD *)(*((_QWORD *)&v5 + 1) + 8LL),
                        v38,
                        a3);
LABEL_15:
        v10 = v5;
LABEL_16:
        this = v50;
        goto LABEL_17;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        v36 = v8;
        if ( v7 < 0x10 )
          goto LABEL_95;
        v8 += 4;
        v7 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(v9, v36[1], v36[2], v36[3]);
        goto LABEL_15;
      }
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 != 1 )
          goto LABEL_95;
        v34 = v8;
        if ( v7 < 0x10 )
          goto LABEL_95;
        v8 += 4;
        v7 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(v9, v34[1], v34[2], v34[3]);
        goto LABEL_15;
      }
      if ( v7 < 0x10
        || (v8 += 4, v7 -= 16, a3 = *((unsigned int *)this + 3), *((_QWORD *)&v5 + 1) = 4 * a3, v7 < 4 * a3) )
      {
LABEL_105:
        v10 = -1073741811;
        goto LABEL_18;
      }
      v35 = v8;
      v8 = (unsigned int *)((char *)v8 + *((_QWORD *)&v5 + 1));
      v7 -= DWORD2(v5);
      LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                      v9,
                      *((_DWORD *)this + 1),
                      *((_DWORD *)this + 2),
                      v35,
                      a3);
    }
    v10 = v5;
    this = v50;
    v6 = a5;
    if ( (v5 & 0x80000000) == 0LL )
      *((_BYTE *)v9 + 241) |= 1u;
LABEL_18:
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    {
      McTemplateK0qx(this, *((_QWORD *)&v5 + 1), a3, *(unsigned int *)this, v10);
      v6 = a5;
    }
  }
  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    McTemplateK0x(this, &DCompCommandsInBatch, a3, *a4);
  if ( v10 >= 0 )
  {
    if ( *a4 > 0x32 )
      *((_BYTE *)v9 + 241) |= 1u;
    if ( v7 )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
