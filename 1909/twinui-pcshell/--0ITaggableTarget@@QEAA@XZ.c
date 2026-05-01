/*
 * XREFs of ??0ITaggableTarget@@QEAA@XZ @ 0x1803A8CEC
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1803A8AF8 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ITaggableTarget *__fastcall ITaggableTarget::ITaggableTarget(ITaggableTarget *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  return this;
}
