/*
 * XREFs of ?ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams@@YAXPEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C00A7D40
 * Callers:
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(struct _NDIS_RECEIVE_QUEUE_PARAMETERS *a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r8
  struct _NDIS_RECEIVE_QUEUE_PARAMETERS *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // r8
  _IF_COUNTED_STRING_LH *p_VmName; // rcx
  char *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _IF_COUNTED_STRING_LH *p_QueueName; // rcx
  char *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _DWORD v35[6]; // [rsp+0h] [rbp-100h] BYREF
  _GROUP_AFFINITY v36; // [rsp+18h] [rbp-E8h]
  unsigned int v37; // [rsp+28h] [rbp-D8h]
  unsigned int v38; // [rsp+2Ch] [rbp-D4h]
  unsigned int v39; // [rsp+30h] [rbp-D0h]
  char v40; // [rsp+34h] [rbp-CCh] BYREF
  char v41; // [rsp+238h] [rbp+138h] BYREF

  v1 = 8LL;
  v2 = v35;
  v4 = a1;
  do
  {
    v5 = *(_OWORD *)&v4->QueueGroupId;
    *(_OWORD *)v2 = *(_OWORD *)&v4->Header.Type;
    v6 = *(_OWORD *)&v4->ProcessorAffinity.Group;
    *((_OWORD *)v2 + 1) = v5;
    v7 = *(_OWORD *)&v4->LookaheadSize;
    *((_OWORD *)v2 + 2) = v6;
    v8 = *(_OWORD *)&v4->VmName.String[5];
    *((_OWORD *)v2 + 3) = v7;
    v9 = *(_OWORD *)&v4->VmName.String[13];
    *((_OWORD *)v2 + 4) = v8;
    v10 = *(_OWORD *)&v4->VmName.String[21];
    *((_OWORD *)v2 + 5) = v9;
    v11 = *(_OWORD *)&v4->VmName.String[29];
    v4 = (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)((char *)v4 + 128);
    *((_OWORD *)v2 + 6) = v10;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = *(_QWORD *)&v4->LookaheadSize;
  v13 = *(_OWORD *)&v4->QueueGroupId;
  *(_OWORD *)v2 = *(_OWORD *)&v4->Header.Type;
  v14 = *(_OWORD *)&v4->ProcessorAffinity.Group;
  *((_OWORD *)v2 + 1) = v13;
  *((_OWORD *)v2 + 2) = v14;
  *((_QWORD *)v2 + 6) = v12;
  LODWORD(v12) = *(_DWORD *)&v4->VmName.String[1];
  v15 = 4LL;
  v2[14] = v12;
  *(&a1->QueueGroupId + 1) = 0;
  v16 = 4LL;
  a1->Header = (_NDIS_OBJECT_HEADER)v35[0];
  a1->Header.Size = 1084;
  a1->Flags = v35[1];
  a1->QueueType = v35[2];
  a1->QueueId = v35[3];
  a1->QueueGroupId = v35[4];
  a1->ProcessorAffinity = v36;
  a1->NumSuggestedReceiveBuffers = v37;
  a1->MSIXTableEntry = v38;
  a1->LookaheadSize = v39;
  p_VmName = &a1->VmName;
  v18 = &v40;
  do
  {
    v19 = *((_OWORD *)v18 + 1);
    *(_OWORD *)&p_VmName->Length = *(_OWORD *)v18;
    v20 = *((_OWORD *)v18 + 2);
    *(_OWORD *)&p_VmName->String[7] = v19;
    v21 = *((_OWORD *)v18 + 3);
    *(_OWORD *)&p_VmName->String[15] = v20;
    v22 = *((_OWORD *)v18 + 4);
    *(_OWORD *)&p_VmName->String[23] = v21;
    v23 = *((_OWORD *)v18 + 5);
    *(_OWORD *)&p_VmName->String[31] = v22;
    v24 = *((_OWORD *)v18 + 6);
    *(_OWORD *)&p_VmName->String[39] = v23;
    v25 = *((_OWORD *)v18 + 7);
    v18 += 128;
    *(_OWORD *)&p_VmName->String[47] = v24;
    p_VmName = (_IF_COUNTED_STRING_LH *)((char *)p_VmName + 128);
    *(_OWORD *)&p_VmName[-1].String[249] = v25;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)&p_VmName->Length = *(_DWORD *)v18;
  p_QueueName = &a1->QueueName;
  v27 = &v41;
  do
  {
    v28 = *((_OWORD *)v27 + 1);
    *(_OWORD *)&p_QueueName->Length = *(_OWORD *)v27;
    v29 = *((_OWORD *)v27 + 2);
    *(_OWORD *)&p_QueueName->String[7] = v28;
    v30 = *((_OWORD *)v27 + 3);
    *(_OWORD *)&p_QueueName->String[15] = v29;
    v31 = *((_OWORD *)v27 + 4);
    *(_OWORD *)&p_QueueName->String[23] = v30;
    v32 = *((_OWORD *)v27 + 5);
    *(_OWORD *)&p_QueueName->String[31] = v31;
    v33 = *((_OWORD *)v27 + 6);
    *(_OWORD *)&p_QueueName->String[39] = v32;
    v34 = *((_OWORD *)v27 + 7);
    v27 += 128;
    *(_OWORD *)&p_QueueName->String[47] = v33;
    p_QueueName = (_IF_COUNTED_STRING_LH *)((char *)p_QueueName + 128);
    *(_OWORD *)&p_QueueName[-1].String[249] = v34;
    --v15;
  }
  while ( v15 );
  *(_DWORD *)&p_QueueName->Length = *(_DWORD *)v27;
}
