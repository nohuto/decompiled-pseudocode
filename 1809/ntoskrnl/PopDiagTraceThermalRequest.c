/*
 * XREFs of PopDiagTraceThermalRequest @ 0x1406DC3F8
 * Callers:
 *     PopRundownThermalRequests @ 0x1406DC2B0 (PopRundownThermalRequests.c)
 *     PopAssociateThermalRequest @ 0x140746C38 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140868AB0 (PopOrphanCoolingExtension.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceThermalRequest(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 *v4; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rdi
  __int64 v7; // r14
  unsigned __int64 *PoolWithTag; // rax
  char *v9; // r10
  unsigned __int64 v10; // r12
  char *v11; // r11
  __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // ecx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v19; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v20; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v21; // [rsp+44h] [rbp-BCh] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  BOOL *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int16 *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int16 *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int16 *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int16 *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  char *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  char *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  char *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]

  v4 = 0LL;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a2) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                       *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                       0x67446F50u);
    v6 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v7 = 0LL;
    if ( v7 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &NumberOfBytes);
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x50455654u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, &NumberOfBytes) >= 0 )
        {
          v9 = (char *)v4 + v4[2];
          v10 = v4[4];
          v11 = (char *)v4 + v4[3];
          v12 = -1LL;
          v20 = NumberOfBytes - v10;
          v13 = -1LL;
          do
            ++v13;
          while ( *(_WORD *)&v9[2 * v13] );
          v18 = v13;
          do
            ++v12;
          while ( *(_WORD *)&v11[2 * v12] );
          v19 = v12;
          v14 = *(_BYTE *)(a1 + 17) == 0;
          v17 = *(_WORD *)(v7 + 280) >> 1;
          v23 = a1;
          v21 = !v14;
          v16 = *(_BYTE *)(a1 + 16);
          UserData.Ptr = (ULONGLONG)&v16;
          v25 = &v21;
          v27 = &v23;
          v29 = &v17;
          v31 = &v18;
          v33 = &v19;
          v35 = &v20;
          *(_QWORD *)&UserData.Size = 1LL;
          v26 = 4LL;
          v28 = 8LL;
          v30 = 2LL;
          v32 = 2LL;
          v34 = 2LL;
          v36 = 2LL;
          v15 = *(unsigned __int16 *)(v7 + 280);
          v37 = *(_QWORD *)(v7 + 288);
          v38 = v15;
          v41 = 2 * (unsigned __int16)v13;
          v39 = 0;
          v44 = 2 * (unsigned __int16)v12;
          v46 = (char *)v4 + v10;
          v47 = (unsigned __int16)(NumberOfBytes - v10);
          v40 = v9;
          v42 = 0;
          v43 = v11;
          v45 = 0;
          v48 = 0;
          EtwWrite(PopDiagHandle, a2, 0LL, 0xBu, &UserData);
        }
      }
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x67446F50u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x50455654u);
  }
}
