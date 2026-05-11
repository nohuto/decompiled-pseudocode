/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DE8C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C00096B0 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, __int64 Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *v3; // r13
  PIRP v4; // rsi
  int v6; // ebx
  unsigned __int16 v7; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  int PinFromEpIndex; // eax
  CSidebandDevice *v10; // rcx
  unsigned __int16 v11; // r9
  unsigned int CompletionMode; // r8d
  union KSDATAFORMAT **v13; // rdx
  __int64 v14; // rbx
  ULONG Length; // eax
  unsigned int v16; // r15d
  ULONG_PTR v17; // rax
  __int64 *UserBuffer; // r12
  struct _KSPIN_DESCRIPTOR_EX *v19; // r9
  __int64 v20; // r13
  int v21; // r15d
  __int64 v22; // rcx
  _DWORD *v23; // rax
  unsigned int *v25; // [rsp+28h] [rbp-28h]
  unsigned int *v26; // [rsp+30h] [rbp-20h]
  unsigned __int8 *v27; // [rsp+40h] [rbp-10h]
  ULONG_PTR v28; // [rsp+48h] [rbp-8h]
  unsigned int v29; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+50h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v31; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(struct _IO_STACK_LOCATION **)(Irp + 184);
  v29 = -1;
  v4 = (PIRP)Irp;
  *(_QWORD *)(Irp + 56) = 0LL;
  v31 = 0LL;
  if ( v3->Parameters.Create.Options >= 0x18 )
  {
    Parameters = v3->Parameters.CreatePipe.Parameters;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, Parameters->ReadMode) )
    {
      v6 = -1073741811;
      LODWORD(v26) = -1073741811;
      v7 = 128;
      LODWORD(v25) = Parameters->ReadMode;
      goto LABEL_3;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Irp,
      9u,
      0x81u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      Parameters->ReadMode);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v29, &v31);
    v6 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      CompletionMode = Parameters->CompletionMode;
      v13 = *(union KSDATAFORMAT ***)&Parameters->InboundQuota;
      v29 = 0;
      v30 = 0;
      PinFromEpIndex = CSidebandDevice::IntersectDataFormatsWithDataRange(
                         v10,
                         v13,
                         CompletionMode,
                         v31,
                         0LL,
                         &v30,
                         &v29);
      v6 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v14 = v30;
        Length = v3->Parameters.Read.Length;
        v16 = v29 + 24 + 8 * v30;
        if ( Length )
        {
          if ( Length != v16 )
          {
            v6 = -1073741811;
            LODWORD(v26) = -1073741811;
            v7 = 132;
            LODWORD(v25) = v29 + 24 + 8 * v30;
            goto LABEL_3;
          }
          UserBuffer = (__int64 *)v4->UserBuffer;
          v28 = v16;
          memset(UserBuffer, 0, v16);
          v19 = v31;
          *(_DWORD *)UserBuffer = v16;
          v20 = v14;
          *((_DWORD *)UserBuffer + 1) = Parameters->ReadMode;
          v21 = 0;
          UserBuffer[2] = (__int64)(UserBuffer + 3);
          *((_DWORD *)UserBuffer + 2) = v14;
          v27 = (unsigned __int8 *)&UserBuffer[v14 + 3];
          v6 = CSidebandDevice::IntersectDataFormatsWithDataRange(
                 (CSidebandDevice *)(UserBuffer + 1),
                 *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
                 Parameters->CompletionMode,
                 v19,
                 v27,
                 (unsigned int *)UserBuffer + 2,
                 &v29);
          if ( v30 )
          {
            Irp = UserBuffer[2];
            v22 = 0LL;
            do
            {
              *(_QWORD *)(v22 + Irp) = &v27[v21];
              Irp = UserBuffer[2];
              v23 = *(_DWORD **)(v22 + Irp);
              v22 += 8LL;
              v21 += *v23;
              --v20;
            }
            while ( v20 );
          }
          if ( v6 < 0 )
          {
            v11 = 133;
            LODWORD(v25) = v6;
            goto LABEL_9;
          }
          v17 = v28;
        }
        else
        {
          v17 = v16;
          v6 = -1073741789;
        }
        v4->IoStatus.Information = v17;
        goto LABEL_23;
      }
      v11 = 131;
    }
    else
    {
      v11 = 130;
    }
    LODWORD(v25) = PinFromEpIndex;
LABEL_9:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Irp,
      9u,
      v11,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v25);
    goto LABEL_23;
  }
  v6 = -1073741811;
  LODWORD(v26) = -1073741811;
  v7 = 127;
  LODWORD(v25) = 24;
LABEL_3:
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    Irp,
    a3,
    v7,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v25,
    v26);
LABEL_23:
  v4->IoStatus.Status = v6;
  IofCompleteRequest(v4, 0);
  return (unsigned int)v6;
}
